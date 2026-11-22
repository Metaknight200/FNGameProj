#include "FortDefenderSlotItemPicker.h"

UFortDefenderSlotItemPicker::UFortDefenderSlotItemPicker() {
    this->DefenderSlotType = EFortDefenderSlotType::Invalid;
    this->CurrentSortType = EInventoryContentSortType::ByRating;
}

void UFortDefenderSlotItemPicker::SetSortType(EInventoryContentSortType SortType) {
}

void UFortDefenderSlotItemPicker::PopulateDefenderSlotItems(const UFortDefenderItem* DefenderItem) {
}


void UFortDefenderSlotItemPicker::NextSortType() {
}


