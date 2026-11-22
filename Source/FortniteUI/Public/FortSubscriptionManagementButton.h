#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "UObject/NoExportTypes.h"
#include "FortSubscriptionManagementButton.generated.h"

class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UImage;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSubscriptionManagementButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RealMoneyPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VBuckFinalCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_Prices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_RealMoneyPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_VBuckPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Spinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color_CmsOverrideC;
    
public:
    UFortSubscriptionManagementButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonDataSet();
    
};

