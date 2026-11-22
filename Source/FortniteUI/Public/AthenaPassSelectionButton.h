#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "UObject/NoExportTypes.h"
#include "AthenaPassSelectionButton.generated.h"

class UBorder;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPassSelectionButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCallout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RealMoneyPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VBuckFinalCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Callout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_Prices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_RealMoneyPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_VBuckPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* CalloutContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SubtitleContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideC;
    
public:
    UAthenaPassSelectionButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAnimations();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonDataSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoverStateChanged(bool bInHoverState, bool bIsUsingTouch);
    
};

