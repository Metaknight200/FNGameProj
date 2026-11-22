#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DisplayManagerVariantData.h"
#include "AthenaItemShopOfferDetailsWidgetBase.h"
#include "AthenaItemShopOfferStyleScreen.generated.h"

class UAthenaCosmeticUnlockingInfo;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortItemBaseWidget;
class UFortItemDefinition;
class UFortItemPreviewScreen;
class UFortVariantPicker;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopOfferStyleScreen : public UAthenaItemShopOfferDetailsWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemPreviewScreen* ItemPreview_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemBaseWidget* Header_ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_StyleDisclaimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantPicker* Picker_VariantSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticUnlockingInfo* Info_LockedNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* TriggeringItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayManagerVariantData VariantData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> OfferIndicesWithVariants;
    
public:
    UAthenaItemShopOfferStyleScreen();

    UFUNCTION(BlueprintCallable)
    void SetTriggeringItemDefinition(const UFortItemDefinition* TriggeringItemDef);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVariantIndicesPopulated(bool bMultipleVariants);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleBackAction();
    
};

