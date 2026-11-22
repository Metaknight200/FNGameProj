#include "SocialGroupListEntry.h"

USocialGroupListEntry::USocialGroupListEntry() {
    this->ActionMenuClass = NULL;
    this->SocialGroup = NULL;
    this->Text_GroupName = NULL;
    this->MenuAnchor_Actions = NULL;
}

UUserWidget* USocialGroupListEntry::HandleGetMenuContent() {
    return NULL;
}


