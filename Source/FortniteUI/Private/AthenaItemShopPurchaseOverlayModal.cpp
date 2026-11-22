#include "AthenaItemShopPurchaseOverlayModal.h"

UAthenaItemShopPurchaseOverlayModal::UAthenaItemShopPurchaseOverlayModal() {
    this->HBox_SuccessfullyPurchased = NULL;
    this->HBox_SuccessfullyRefunded = NULL;
}

bool UAthenaItemShopPurchaseOverlayModal::ShouldShowAsRefund() const {
    return false;
}

bool UAthenaItemShopPurchaseOverlayModal::IsLastItem(int32 ItemIndex) const {
    return false;
}


bool UAthenaItemShopPurchaseOverlayModal::HasMultipleItems() const {
    return false;
}

int32 UAthenaItemShopPurchaseOverlayModal::GetQuantityPurchased() const {
    return 0;
}

TArray<FPurchasedItemInfo> UAthenaItemShopPurchaseOverlayModal::GetPurchasedItems() const {
    return TArray<FPurchasedItemInfo>();
}

void UAthenaItemShopPurchaseOverlayModal::Dismiss() {
}


