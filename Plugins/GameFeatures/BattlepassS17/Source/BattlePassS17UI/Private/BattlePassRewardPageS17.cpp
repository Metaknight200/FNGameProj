#include "BattlePassRewardPageS17.h"

UBattlePassRewardPageS17::UBattlePassRewardPageS17() {
    this->RewardsGridClass = NULL;
    this->PageNavigator = NULL;
    this->FocusedReward = NULL;
    this->RewardPageType = ERewardPageType::MAX;
    this->HoldTileTooltip_ClaimedRewardsToHide = 2;
    this->HoldTileTooltip_RequiredBattleStarsToShow = 5;
    this->TutorialTooltip_SecondPageUnlock = NULL;
    this->TutorialTooltip_ClaimAllRewards = NULL;
    this->TutorialTooltip_HoldTile = NULL;
    this->SeasonData_BattleStar = NULL;
    this->BulkBuyInputData = NULL;
}





