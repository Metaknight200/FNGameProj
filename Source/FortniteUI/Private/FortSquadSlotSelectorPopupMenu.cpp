#include "FortSquadSlotSelectorPopupMenu.h"

UFortSquadSlotSelectorPopupMenu::UFortSquadSlotSelectorPopupMenu() {
    this->bReadOnlyModeWIFE = false;
}

bool UFortSquadSlotSelectorPopupMenu::IsScreenWIFE() const {
    return false;
}

UFortSquadSlotSelectorButton* UFortSquadSlotSelectorPopupMenu::GetHostButton() const {
    return NULL;
}


