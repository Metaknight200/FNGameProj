#include "FortGiftingScreen.h"

UFortGiftingScreen::UFortGiftingScreen() {
    this->TabButtonGroup = NULL;
    this->OfferInfo = NULL;
    this->RequiredOfferInfo = NULL;
    this->LocalPlayerDetails = NULL;
    this->Text_ItemName = NULL;
    this->Image_RecipientCurrency = NULL;
    this->Text_Price = NULL;
    this->Text_GiftCount = NULL;
    this->Button_Continue = NULL;
    this->Button_GetVBucks = NULL;
    this->Button_Send = NULL;
    this->Button_TabRecipients = NULL;
    this->Button_MobileClose = NULL;
    this->ListView_ChosenRecipients = NULL;
    this->Activatable_PersonalizeTab = NULL;
    this->Activatable_RecipientsTab = NULL;
    this->VBox_Recipients = NULL;
}




void UFortGiftingScreen::SetOffer(UFortStoreFrontOfferInfo* NewOfferInfo) {
}


void UFortGiftingScreen::OnGiftingTimerEnded() {
}



void UFortGiftingScreen::HandleRequiredMtxPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

void UFortGiftingScreen::HandleGiftingPolicyClicked(bool& bPassThrough) {
}

void UFortGiftingScreen::HandleBackActionClicked(bool& bPassThrough) {
}

UFortPersonalizeGiftTab* UFortGiftingScreen::GetWrapGiftWidget() const {
    return NULL;
}

UCommonButtonLegacy* UFortGiftingScreen::GetSendButton() const {
    return NULL;
}

UCommonButtonLegacy* UFortGiftingScreen::GetGetVBucksButton() const {
    return NULL;
}

UFortGiftRecipientsTab* UFortGiftingScreen::GetFriendSelectWidget() const {
    return NULL;
}

UCommonButtonLegacy* UFortGiftingScreen::GetFriendSelectTabButton() const {
    return NULL;
}

UCommonButtonLegacy* UFortGiftingScreen::GetContinueButton() const {
    return NULL;
}

void UFortGiftingScreen::DynamicHandleGiftSent(bool bSuccess, const TArray<FString>& IneligibleAccounts, const TArray<FString>& ErrorCodes) {
}




