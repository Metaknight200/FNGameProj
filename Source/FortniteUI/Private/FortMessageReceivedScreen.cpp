#include "FortMessageReceivedScreen.h"

UFortMessageReceivedScreen::UFortMessageReceivedScreen() {
    this->GiftBoxItem = NULL;
    this->GiftBoxImage = NULL;
}


FText UFortMessageReceivedScreen::GetHeaderAssetString(const FString& Param) {
    return FText::GetEmpty();
}

FText UFortMessageReceivedScreen::GetBodyAssetString(const FString& Param) {
    return FText::GetEmpty();
}


