#include "FortHeroLoadoutSlotButton.h"

UFortHeroLoadoutSlotButton::UFortHeroLoadoutSlotButton() {
    this->SlotIndex = 0;
    this->SlotType = EHeroLoadoutSlotType::CommanderSlot;
    this->ContextMenuAnchor = NULL;
}

bool UFortHeroLoadoutSlotButton::IsContextMenuOpen() const {
    return false;
}

void UFortHeroLoadoutSlotButton::HandleMenuOpenChanged(bool bIsMenuOpen) {
}


