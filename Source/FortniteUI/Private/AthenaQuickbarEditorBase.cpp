#include "AthenaQuickbarEditorBase.h"

UAthenaQuickbarEditorBase::UAthenaQuickbarEditorBase() {
    this->EquipButtonGroup = NULL;
    this->bCheckVisibilityBasedOffInventoryCapacity = false;
    this->QuickbarIndex = EFortQuickBars::Primary;
    this->QuickBarSlotButtonClass = NULL;
    this->FirstQuickBarSlotIndex = 1;
    this->NumQuickBarSlots = 5;
}

void UAthenaQuickbarEditorBase::SelectPreviousQuickBarSlot(const bool bSetFocus) {
}

void UAthenaQuickbarEditorBase::SelectNextQuickBarSlot(const bool bSetFocus) {
}


UWidget* UAthenaQuickbarEditorBase::GetFirstEquipSlotButton() const {
    return NULL;
}


