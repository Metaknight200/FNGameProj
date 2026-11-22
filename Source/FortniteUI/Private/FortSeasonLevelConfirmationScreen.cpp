#include "FortSeasonLevelConfirmationScreen.h"

UFortSeasonLevelConfirmationScreen::UFortSeasonLevelConfirmationScreen() {
    this->Mobile_CloseButton = NULL;
    this->Button_IncreasePurchaseTier = NULL;
    this->Button_DecreasePurchaseTier = NULL;
    this->Text_Header = NULL;
    this->Text_TierBundleOffer_Header = NULL;
    this->Text_RewardCount = NULL;
    this->Text_PurchasePrice = NULL;
    this->Text_TierBundleOriginalPrice = NULL;
    this->Text_TierBundlePurchasePrice = NULL;
    this->Text_RefundDisclaimer = NULL;
    this->EntryBox_RewardIcons = NULL;
    this->Button_Purchase = NULL;
    this->Button_TierBundlePurchase = NULL;
    this->SB_TierBundle = NULL;
    this->Widget_TierBundleWarning = NULL;
}



void UFortSeasonLevelConfirmationScreen::HandlePurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

void UFortSeasonLevelConfirmationScreen::HandleCloseScreen(bool& bPassThrough) {
}

bool UFortSeasonLevelConfirmationScreen::CanAffordTierPurchase() const {
    return false;
}

bool UFortSeasonLevelConfirmationScreen::CanAffordTierBundlePurchase() const {
    return false;
}


