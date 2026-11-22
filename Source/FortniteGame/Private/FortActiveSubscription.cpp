#include "FortActiveSubscription.h"

FFortActiveSubscription::FFortActiveSubscription() {
    // Initialize reflected value fields omitted by the dump.
    this->CurrentMonthlyRewardDate = FDateTime(0);
    this->LastAuthRefresh = FDateTime(0);
    this->LastRenewalRewardDate = FDateTime(0);
    this->LastStatusRefresh = FDateTime(0);
    this->MustRefreshAuthBy = FDateTime(0);
    this->NextMonthlyRewardDate = FDateTime(0);
    this->NextRenewalRewardDate = FDateTime(0);
    this->NextRewardDate = FDateTime(0);
    this->SubscriptionEndDate = FDateTime(0);
    this->IsRetryingRenewal = false;
    this->WillAutoRenew = false;
    this->AppStore = EAppStore::DebugStore;
}

