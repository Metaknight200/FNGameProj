#include "FortCollectionBookItemPopupMenu.h"

UFortCollectionBookItemPopupMenu::UFortCollectionBookItemPopupMenu() {
}



UFortCollectionBookSlotButton* UFortCollectionBookItemPopupMenu::GetHostButton() const {
    return NULL;
}

bool UFortCollectionBookItemPopupMenu::CanItemBeUnslotted() {
    return false;
}

bool UFortCollectionBookItemPopupMenu::CanItemBePurchased() {
    return false;
}


