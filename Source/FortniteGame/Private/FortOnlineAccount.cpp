#include "FortOnlineAccount.h"

UFortOnlineAccount::UFortOnlineAccount() {
    this->WebCreateEpicAccountUrl.AddDefaulted(4);
    this->bShouldGrantFreeAccess = true;
    this->bEnableEulaCheck = false;
    this->bShouldAthenaQueryRecentPlayers = false;
    this->bHadLoginPurchaseCheckFailure = false;
    this->IgnoreProducts.AddDefaulted(1);
    this->bShouldClientForcePartnerId = false;
    this->bDisablePurchasingOnRedemptionFailure = true;
    this->MinimumSecondsBetweenPurchaseRedemptionAttempts = 60.00f;
    this->bPromptUserAndReverifyAuthToken = true;
    this->RefreshConnectionTimerDuration = 7.00f;
}


