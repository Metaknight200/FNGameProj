#include "AthenaGiftingConfirmationScreen.h"

UAthenaGiftingConfirmationScreen::UAthenaGiftingConfirmationScreen() {
    this->PresentedGiftableOfferInfo = NULL;
    this->PresentedOptionalTokenOfferInfo = NULL;
    this->MinGiftSubmissionDelay = 2.00f;
    this->MaxGiftSubmissionDelay = 5.00f;
    this->Button_WrapOptions = NULL;
    this->Button_Back = NULL;
    this->Button_MobileClose = NULL;
    this->Button_MtxWallet = NULL;
    this->Panel_GiftingPurchase = NULL;
    this->Panel_WrapOptions = NULL;
    this->Panel_GiftConfirmed = NULL;
    this->Panel_GiftingErrors = NULL;
}


void UAthenaGiftingConfirmationScreen::HandleTokenOfferPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

void UAthenaGiftingConfirmationScreen::HandleGiftSent(bool bSuccess, const TArray<FString>& IneligibleAccounts, const TArray<FString>& ErrorCodes) {
}

void UAthenaGiftingConfirmationScreen::Dismiss() {
}


