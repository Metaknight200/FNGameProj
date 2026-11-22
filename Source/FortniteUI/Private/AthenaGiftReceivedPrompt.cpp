#include "AthenaGiftReceivedPrompt.h"

UAthenaGiftReceivedPrompt::UAthenaGiftReceivedPrompt() {
    this->ItemPresentationScreenClass = NULL;
    this->GiftBoxItem = NULL;
    this->Widget_HeaderInfo = NULL;
    this->Button_Open = NULL;
    this->Image_GiftBox = NULL;
}



void UAthenaGiftReceivedPrompt::HandleMessageTextFiltered(bool bSuccess, const FString& SanitizedMessage) {
}

void UAthenaGiftReceivedPrompt::DismissPrompt() {
}


