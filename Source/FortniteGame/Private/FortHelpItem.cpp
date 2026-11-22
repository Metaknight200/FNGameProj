#include "FortHelpItem.h"

UFortHelpItem::UFortHelpItem() {
    this->ItemType = EFortHelpItemType::Header;
}

TArray<UFortHelpItem*> UFortHelpItem::GetSubItems() {
    return TArray<UFortHelpItem*>();
}

UFortHelpItem* UFortHelpItem::GetItemWithID(const FName _ItemID) {
    return NULL;
}


