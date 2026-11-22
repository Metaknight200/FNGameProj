#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeTabGroup.generated.h"

class UAthenaScrollBox;
class UCommonButtonBase;
class UCommonButtonGroupBase;
class UCommonButtonStyle;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeTabGroup : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentTabChanged, int32, CurrentTabIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentTabChanged OnCurrentTabChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonBase> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TabOnHoveredSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TabOnPressedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> TabButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaScrollBox* Tab_Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* TabGroup;
    
public:
    UFortCreativeTabGroup();

    UFUNCTION(BlueprintCallable)
    void PreviousTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabButtonAdded(UCommonButtonBase* Button, const FText& TabName, const FSlateBrush& TabIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSimpleTabButtonAdded(UCommonButtonBase* Button, const FText& TabName);
    
    UFUNCTION(BlueprintCallable)
    void NextTab();
    
};

