#include "FortUIMessagesPageBase.h"

UFortUIMessagesPageBase::UFortUIMessagesPageBase() {
    this->MaximumMessagesShown = 0;
    this->MessagesList = NULL;
}

void UFortUIMessagesPageBase::OnNotificationCleared(UFortUINotification* ClearedMessage) {
}

void UFortUIMessagesPageBase::OnMessageAvailable() {
}

void UFortUIMessagesPageBase::FillMessagesList() {
}


