#include "AthenaItemShopOfferDetailsWidgetBase.h"

UAthenaItemShopOfferDetailsWidgetBase::UAthenaItemShopOfferDetailsWidgetBase() {
    this->OfferData = NULL;
    this->Text_CosmeticWarning = NULL;
    this->TextUndoAvailability = NULL;
    this->Text_UndoBottomBarWarning = NULL;
    this->Button_Undo = NULL;
    this->bImmediatelyPurchased = false;
    this->PurchaseModalClass = NULL;
    this->ProgressModalClass = NULL;
    this->ProgressModal = NULL;
    this->bShowRefundWarningWhileMatchmaking = true;
    this->bShowRefundWarningWhileInZone = true;
}

void UAthenaItemShopOfferDetailsWidgetBase::ShowPurchasedOverlayWidget(int32 QuantityPurchased, const TArray<FPurchasedItemInfo> PurchasedItems, bool bShowAsRefund, const FString& OfferId) {
}

void UAthenaItemShopOfferDetailsWidgetBase::ShowItemPresentationScreen(const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

bool UAthenaItemShopOfferDetailsWidgetBase::ShouldShowReloadVBucks() const {
    return false;
}

bool UAthenaItemShopOfferDetailsWidgetBase::ShouldShowDynamicReloadVBucks() const {
    return false;
}

bool UAthenaItemShopOfferDetailsWidgetBase::ShouldHavePurchaseConfirmation() const {
    return false;
}

void UAthenaItemShopOfferDetailsWidgetBase::SetOffer(UFortStoreFrontOfferInfo* InOfferData) {
}

void UAthenaItemShopOfferDetailsWidgetBase::SendShopInteractionAnalytic(const FString& Interaction) const {
}

void UAthenaItemShopOfferDetailsWidgetBase::SendRealMoneyPurchase(int32 PriceIndex, int32 Quantity) {
}

void UAthenaItemShopOfferDetailsWidgetBase::RefreshUndoState(UFortStoreFrontOfferInfo* OfferPurchased) {
}

void UAthenaItemShopOfferDetailsWidgetBase::RefreshOfferInfo() {
}

void UAthenaItemShopOfferDetailsWidgetBase::PurchaseOffer(const FOnPurchaseOfferComplete& Callback, int32 Quantity) {
}






void UAthenaItemShopOfferDetailsWidgetBase::HandleUndoAction() {
}

void UAthenaItemShopOfferDetailsWidgetBase::HandleRealMoneyPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

void UAthenaItemShopOfferDetailsWidgetBase::HandleGiftingItemPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

void UAthenaItemShopOfferDetailsWidgetBase::HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo) {
}

UFortStoreFrontOfferInfo* UAthenaItemShopOfferDetailsWidgetBase::GetOfferInfoById(const FString& OfferId) const {
    return NULL;
}

UFortStoreFrontOfferInfo* UAthenaItemShopOfferDetailsWidgetBase::GetOfferInfo() const {
    return NULL;
}



