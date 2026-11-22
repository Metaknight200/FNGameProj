#include "BacchusQuickbar.h"

UBacchusQuickbar::UBacchusQuickbar() {
    this->SlotSize = 128.00f;
    this->SlotType = EComboSlotType::Combo;
    this->bIsBackwards = false;
    this->BacchusQuickbarPrimary = NULL;
    this->BacchusQuickbarSecondary = NULL;
    this->BacchusQuickbarCreative = NULL;
    this->BarSwitcher = NULL;
}

void UBacchusQuickbar::Refresh_Implementation() {
}


void UBacchusQuickbar::OnModeChanged(EFortQuickBars NewQuickbar, const int32 FocusedSlot) {
}


