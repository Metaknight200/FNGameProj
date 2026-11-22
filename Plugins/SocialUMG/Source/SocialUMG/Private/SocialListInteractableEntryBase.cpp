#include "SocialListInteractableEntryBase.h"

USocialListInteractableEntryBase::USocialListInteractableEntryBase() {
    this->ActionMenuClass = NULL;
    this->MenuAnchor_Actions = NULL;
}

void USocialListInteractableEntryBase::HandleMenuOpenChanged(bool bIsMenuOpen) {
}

UUserWidget* USocialListInteractableEntryBase::HandleGetMenuContent() {
    return NULL;
}


