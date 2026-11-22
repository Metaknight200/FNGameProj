#include "MoleQuickChatMessageEntry.h"

UMoleQuickChatMessageEntry::UMoleQuickChatMessageEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->Text_Sender = NULL;
    this->Text_Message = NULL;
    this->bIsFromSelf = false;
    this->bIsFromPreviousSender = false;
    this->PlayerState = NULL;
    this->PlayerItemDefinition = NULL;
}



