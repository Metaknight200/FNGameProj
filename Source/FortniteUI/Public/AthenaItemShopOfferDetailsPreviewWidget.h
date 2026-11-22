#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCosmeticVariantPreview.h"
#include "AthenaItemShopOfferDetailsWidgetBase.h"
#include "UnlockableVariantPreviewInfo.h"
#include "AthenaItemShopOfferDetailsPreviewWidget.generated.h"

class UAthenaItemShopOfferInspectionNavigator;
class UCommonButtonLegacy;
class UFortAccountItemDefinition;
class UFortAthenaReward;
class UFortItem;
class UFortItemBaseWidget;
class UFortItemPreviewScreen;
class UFortStoreSkinDetailsPopup;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopOfferDetailsPreviewWidget : public UAthenaItemShopOfferDetailsWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemPreviewScreen* ItemPreview_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemBaseWidget* Item_InfoHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenVariantsRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* ItemToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticVariantPreview> CachedVariantPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUnlockableVariantPreviewInfo VariantPreviewInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopOfferInspectionNavigator* OfferNavigator_ArrowNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortStoreSkinDetailsPopup* StorePopup_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SendGift;
    
public:
    UAthenaItemShopOfferDetailsPreviewWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSwipeButtonsVisibility();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewFromOffer();
    
    UFUNCTION(BlueprintCallable)
    void TryDismiss();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPurchaseChoiceRequest();
    
    UFUNCTION(BlueprintCallable)
    void ShowItemFromItemReward(UFortAthenaReward* InItemReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayOfferPurchasedOverlay() const;
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* InItemToRepresent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPurchasing(bool bInIsPurchasing);
    
    UFUNCTION(BlueprintCallable)
    void RegisterItemRewardInteraction(UFortAthenaReward* InItemReward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVariantPreviewInfoUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateItemRestrictionCallout(bool bShouldShow, const FText& RestrictionText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMultiplePriceRealMoneyOffer() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleReloadStaticMtxClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleReloadDynamicMtxClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemShown(const UFortAccountItemDefinition* AccountItemDef);
    
    UFUNCTION(BlueprintCallable)
    void HandleGetVBucksClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleBackAction();
    
    UFUNCTION(BlueprintCallable)
    FUnlockableVariantPreviewInfo GetVariantPreviewInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const;
    
    UFUNCTION(BlueprintCallable)
    void FocusOnWidget(UWidget* WidgetToFocus);
    
};

