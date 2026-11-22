#include "AthenaItemShopRealMoneyOfferDetails.h"

UAthenaItemShopRealMoneyOfferDetails::UAthenaItemShopRealMoneyOfferDetails() {
    this->ItemInspectScreenClass = NULL;
    this->Button_Purchase = NULL;
    this->Button_SendGift = NULL;
    this->Button_Inspect = NULL;
    this->Button_MobileClose = NULL;
    this->Button_MTX = NULL;
    this->Container_SimpleMTXDisplay = NULL;
    this->Overlay_MobileCloseButton = NULL;
    this->ScrollBox_Details = NULL;
}



void UAthenaItemShopRealMoneyOfferDetails::SetVBuckActionOnPurchaseButton() {
}

void UAthenaItemShopRealMoneyOfferDetails::SetPurchaseActionOnPurchaseButton() {
}

void UAthenaItemShopRealMoneyOfferDetails::SetCanPurchase(bool bInCanPurchase) {
}

void UAthenaItemShopRealMoneyOfferDetails::SendGift() {
}


void UAthenaItemShopRealMoneyOfferDetails::RequestMtxPurchase() {
}


bool UAthenaItemShopRealMoneyOfferDetails::IsGiftable() const {
    return false;
}

void UAthenaItemShopRealMoneyOfferDetails::HandleMtxPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

void UAthenaItemShopRealMoneyOfferDetails::HandleLegalTextAction() {
}

void UAthenaItemShopRealMoneyOfferDetails::HandleItemPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

void UAthenaItemShopRealMoneyOfferDetails::HandleBackAction() {
}

bool UAthenaItemShopRealMoneyOfferDetails::GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const {
    return false;
}

void UAthenaItemShopRealMoneyOfferDetails::DeclineMtxPurchase() {
}

void UAthenaItemShopRealMoneyOfferDetails::ClearActionOnPurchaseButton() {
}


