#include "AthenaItemShopOfferDetailsPreviewWidget.h"

UAthenaItemShopOfferDetailsPreviewWidget::UAthenaItemShopOfferDetailsPreviewWidget() {
    this->bIsFocusable = true;
    this->ItemPreview_Widget = NULL;
    this->Item_InfoHeader = NULL;
    this->TimeBetweenVariantsRestart = 2.00f;
    this->TimeBetweenVariants = 2.00f;
    this->ItemToRepresent = NULL;
    this->OfferNavigator_ArrowNavigation = NULL;
    this->StorePopup_Details = NULL;
    this->Button_SendGift = NULL;
}

void UAthenaItemShopOfferDetailsPreviewWidget::UpdateSwipeButtonsVisibility() {
}

void UAthenaItemShopOfferDetailsPreviewWidget::UpdatePreviewFromOffer() {
}

void UAthenaItemShopOfferDetailsPreviewWidget::TryDismiss() {
}

void UAthenaItemShopOfferDetailsPreviewWidget::TriggerPurchaseChoiceRequest() {
}

void UAthenaItemShopOfferDetailsPreviewWidget::ShowItemFromItemReward(UFortAthenaReward* InItemReward) {
}

bool UAthenaItemShopOfferDetailsPreviewWidget::ShouldDisplayOfferPurchasedOverlay() const {
    return false;
}

void UAthenaItemShopOfferDetailsPreviewWidget::SetItemToRepresent(const UFortItem* InItemToRepresent) {
}

void UAthenaItemShopOfferDetailsPreviewWidget::SetIsPurchasing(bool bInIsPurchasing) {
}

void UAthenaItemShopOfferDetailsPreviewWidget::RegisterItemRewardInteraction(UFortAthenaReward* InItemReward) {
}



bool UAthenaItemShopOfferDetailsPreviewWidget::IsMultiplePriceRealMoneyOffer() const {
    return false;
}

void UAthenaItemShopOfferDetailsPreviewWidget::HandleReloadStaticMtxClicked() {
}

void UAthenaItemShopOfferDetailsPreviewWidget::HandleReloadDynamicMtxClicked() {
}

void UAthenaItemShopOfferDetailsPreviewWidget::HandleItemShown(const UFortAccountItemDefinition* AccountItemDef) {
}

void UAthenaItemShopOfferDetailsPreviewWidget::HandleGetVBucksClicked() {
}


FUnlockableVariantPreviewInfo UAthenaItemShopOfferDetailsPreviewWidget::GetVariantPreviewInfo() {
    return FUnlockableVariantPreviewInfo{};
}

bool UAthenaItemShopOfferDetailsPreviewWidget::GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const {
    return false;
}

void UAthenaItemShopOfferDetailsPreviewWidget::FocusOnWidget(UWidget* WidgetToFocus) {
}


