#include "BattlePassPurchaseScreenBase.h"

UBattlePassPurchaseScreenBase::UBattlePassPurchaseScreenBase() {
    this->SeasonData = NULL;
    this->bDoesOwnBattlePass = false;
    this->CurrentSeasonLevel = 1;
    this->GiftingScreenClass = NULL;
    this->MFAModalClass = NULL;
    this->PurchaseCompleteModal = NULL;
    this->GiftBattlePassButton = NULL;
    this->MoreInfo = NULL;
    this->Button_DeclinePurchase = NULL;
    this->BackButton = NULL;
    this->Button_CloseMobile = NULL;
    this->Container_CloseButtonMobile = NULL;
    this->Overlay_TierBundleDisclaimer = NULL;
}

void UBattlePassPurchaseScreenBase::RemoveSelfFromWidgetStack(bool Succeed) {
}




void UBattlePassPurchaseScreenBase::HandleBattlePassPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}


