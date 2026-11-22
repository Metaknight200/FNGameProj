#include "FortExpeditionRewardsWidget.h"

UFortExpeditionRewardsWidget::UFortExpeditionRewardsWidget() {
    this->RewardsTileView = NULL;
    this->bPendingCollection = false;
}

void UFortExpeditionRewardsWidget::RefreshRewardsUI_Implementation(const UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, const TArray<FFortItemInstanceQuantityPair>& Rewards) {
}

void UFortExpeditionRewardsWidget::ProcessNextReward() {
}

void UFortExpeditionRewardsWidget::HandleCollectionExpeditionCompleted(bool bMcpSuccess, const UFortExpeditionItem* Expedition, bool bExpeditionSuccess, const TArray<FFortItemInstanceQuantityPair>& Rewards) {
}


