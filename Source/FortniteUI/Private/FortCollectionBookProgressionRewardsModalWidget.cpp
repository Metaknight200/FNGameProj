#include "FortCollectionBookProgressionRewardsModalWidget.h"

UFortCollectionBookProgressionRewardsModalWidget::UFortCollectionBookProgressionRewardsModalWidget() {
    this->NumRewardsToShow = 5;
    this->RewardBoxWidget = NULL;
    this->MajorRewardBoxWidget = NULL;
    this->XPTextWidget = NULL;
    this->LevelTextWidget = NULL;
    this->ButtonGroup = NULL;
}

void UFortCollectionBookProgressionRewardsModalWidget::OnSelectedButtonChanged(UCommonButtonLegacy* SelectedButton, int32 ButtonIndex) {
}

void UFortCollectionBookProgressionRewardsModalWidget::OnLevelProgressionSet_Implementation(int32 CurrentLevel, float NextLvlPct, int32 MaxAchievedLevel) {
}



