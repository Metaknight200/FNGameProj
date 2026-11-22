#include "SocialChatMessageEntry.h"

USocialChatMessageEntry::USocialChatMessageEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->RichText_Message = NULL;
    this->Button_MessageButton = NULL;
}


bool USocialChatMessageEntry::CanInteract() const {
    return false;
}


