#include "AthenaBattlePassTracker.h"

UAthenaBattlePassTracker::UAthenaBattlePassTracker() {
    this->PassPurchaseScreenClass = NULL;
    this->PushedPurchaseScreen = NULL;
    this->RichText_PaidItemsCollected = NULL;
    this->BattlePassItemTracker_01 = NULL;
    this->BattlePassItemTracker_02 = NULL;
    this->BattlePassItemTracker_03 = NULL;
    this->BattlePassItemTracker_04 = NULL;
    this->Button_PurchaseBattlePass = NULL;
}

void UAthenaBattlePassTracker::HandlePassPurchaseFlowComplete(bool bClosePresentationScreen) {
}


