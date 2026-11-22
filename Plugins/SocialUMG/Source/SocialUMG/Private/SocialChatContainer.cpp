#include "SocialChatContainer.h"

USocialChatContainer::USocialChatContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->ChatManager = NULL;
    this->ActiveChannel = NULL;
    this->TabButtonGroup = NULL;
    this->ChatList_Messages = NULL;
    this->ChatEditableText_MessageEntry = NULL;
    this->Button_SendMessage = NULL;
    this->EntryBox_JoinedChannels = NULL;
    this->ScrollBox_Channels = NULL;
}

void USocialChatContainer::SendCurrentMessage() {
}


void USocialChatContainer::HandleRightTabPressed() {
}

void USocialChatContainer::HandleLeftTabPressed() {
}

void USocialChatContainer::FocusEditableText() {
}

void USocialChatContainer::DynamicHandleMessageTextCommitted(const FText& MessageText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}


