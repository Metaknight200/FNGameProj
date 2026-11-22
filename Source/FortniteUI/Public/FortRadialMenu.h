#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Components/RadialBoxSettings.h"
#include "EFortRadialControllingStick.h"
#include "Templates/SubclassOf.h"
#include "FortRadialMenu.generated.h"

class UDynamicEntryBox;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortRadialMenu : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JoystickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseDeadZoneRadiusPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JoystickMaximumMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadialBoxSettings RadialBoxSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRadialControllingStick ControllingStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ContextRadial;
    
public:
    UFortRadialMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDegreeOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDegreeIncrements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAngleForIndex(int32 Index) const;
    
};

