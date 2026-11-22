#include "FortSubscriptionScreenBase.h"

UFortSubscriptionScreenBase::UFortSubscriptionScreenBase() {
}

bool UFortSubscriptionScreenBase::IsOnActiveSubscriptionPlatform() const {
    return false;
}

FText UFortSubscriptionScreenBase::GetSubscriptionNextBillingDateAsText() const {
    return FText::GetEmpty();
}

FDateTime UFortSubscriptionScreenBase::GetSubscriptionNextBillingDate() const {
    return FDateTime{};
}

EAppStore UFortSubscriptionScreenBase::GetActiveSubscriptionPlatform() const {
    return EAppStore::DebugStore;
}


