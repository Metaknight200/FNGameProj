#include "FortChallengeBundleProgressTrackerToken.h"
#include "EFortItemType.h"

UFortChallengeBundleProgressTrackerToken::UFortChallengeBundleProgressTrackerToken() {
    this->ItemType = EFortItemType::ChallengeBundleCompletionToken;
    this->ProfileType = EItemProfileType::Athena;
}


