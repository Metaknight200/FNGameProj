#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSlottedRadialMenu.h"
#include "MoleQuickChatActionData.h"
#include "MoleSlottedRadialMenu.generated.h"

class UFortRadialSlot;
class UImage;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMoleSlottedRadialMenu : public UFortSlottedRadialMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointerRotationMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleChangedEpsilon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Pointer;
    
public:
    UMoleSlottedRadialMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetNavigation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRadialEntrySelected(int32 Index, UUserWidget* SelectedEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRadialEntriesChanged(const bool bIsActions, const int32 NumEntries, const float Degrees);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategorySelected(const UFortRadialSlot* SelectedSlot, const TArray<FMoleQuickChatActionData>& Actions, const FLinearColor& CategoryColor, const TSoftObjectPtr<UTexture2D>& CategoryImage);
    
};

