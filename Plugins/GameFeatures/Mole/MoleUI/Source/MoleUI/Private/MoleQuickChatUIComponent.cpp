#include "MoleQuickChatUIComponent.h"

UMoleQuickChatUIComponent::UMoleQuickChatUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumTimeBetweenSameMessageSend = 5.00f;
    this->LoadedMessagesTable = NULL;
}


