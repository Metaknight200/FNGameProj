#include "AthenaQuickBarSlotButtonBase.h"

UAthenaQuickBarSlotButtonBase::UAthenaQuickBarSlotButtonBase() {
    this->QuickbarIndex = EFortQuickBars::Primary;
    this->SlotIndex = -1;
    this->ItemIcon = NULL;
}




void UAthenaQuickBarSlotButtonBase::HandleQuickbarContentsChanged(EFortQuickBars InQuickBarIndex, const TArray<int32>& ChangedSlots) {
}

void UAthenaQuickBarSlotButtonBase::HandleInventoryItemSelected(UFortItem* SelectedItem) {
}


