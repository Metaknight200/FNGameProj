#include "FortChatContainer.h"

UFortChatContainer::UFortChatContainer() {
    this->CombinedChannel = NULL;
    this->ActionMenuClass = NULL;
    this->ActionMenu = NULL;
    this->MenuAnchor_MessageActions = NULL;
}


bool UFortChatContainer::IsTextChatRestricted() const {
    return false;
}

UUserWidget* UFortChatContainer::HandleGetMenuContentForAnchor() {
    return NULL;
}


