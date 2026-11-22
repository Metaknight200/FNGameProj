#include "FortPostGameMenuEntry.h"

UFortPostGameMenuEntry::UFortPostGameMenuEntry() {
    this->bSelectable = true;
    this->bInteractableWhenSelected = true;
    this->bDisplayInputActionWhenNotInteractable = false;
    this->Overlay_Entry = NULL;
}


