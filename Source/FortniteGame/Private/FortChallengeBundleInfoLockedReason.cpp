#include "FortChallengeBundleInfoLockedReason.h"

FFortChallengeBundleInfoLockedReason::FFortChallengeBundleInfoLockedReason() {
    // Initialize reflected value fields omitted by the dump.
    this->UnlockTimespanAfterStart = FTimespan::Zero();
    this->ReasonCode = EFortChallengeBundleInfoLockedReasonCode::Unlocked;
    this->RequiredTier = 0;
}

