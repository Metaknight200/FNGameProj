#include "FortCollectionBookSlotButton.h"

UFortCollectionBookSlotButton::UFortCollectionBookSlotButton() {
    this->bSelectable = true;
    this->bInteractableWhenSelected = true;
    this->bDisplayInputActionWhenNotInteractable = false;
    this->CollectionBookSlotWidget = NULL;
    this->PopupMenuAnchor = NULL;
}

void UFortCollectionBookSlotButton::PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection) {
}

void UFortCollectionBookSlotButton::OnSlottedItemUpdated() {
}

UUserWidget* UFortCollectionBookSlotButton::GetPopupMenu() {
    return NULL;
}


