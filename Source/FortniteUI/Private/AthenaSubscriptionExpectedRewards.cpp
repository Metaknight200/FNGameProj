#include "AthenaSubscriptionExpectedRewards.h"

FAthenaSubscriptionExpectedRewards::FAthenaSubscriptionExpectedRewards() {
    this->SubscriptionState = EMcpSubscriptionState::Inactive;
    this->bUsingNextSkin = false;
    this->bUsingNextBattlepassImage = false;
    this->bUsingNextBattlepassTexts = false;
    this->bUsingNextSkinTileImage = false;
}

