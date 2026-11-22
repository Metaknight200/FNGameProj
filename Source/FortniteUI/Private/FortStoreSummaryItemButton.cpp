#include "FortStoreSummaryItemButton.h"

UFortStoreSummaryItemButton::UFortStoreSummaryItemButton() {
    this->HasAnItemMarkedForMulching = false;
    this->PopupMenuAnchor = NULL;
    this->StoreCardObject = NULL;
    this->InventoryContext = NULL;
}

void UFortStoreSummaryItemButton::UpdateMulchListWithItem(bool bAddingItem) {
}

void UFortStoreSummaryItemButton::SetStoreCardObject(UStoreCardObject* CardObject) {
}

void UFortStoreSummaryItemButton::HandleMenuOpenChanged(bool bIsOpen) {
}


UStoreCardObject* UFortStoreSummaryItemButton::GetStoreCardObject() const {
    return StoreCardObject;
}

UUserWidget* UFortStoreSummaryItemButton::GetPopupMenu() {
    return NULL;
}


