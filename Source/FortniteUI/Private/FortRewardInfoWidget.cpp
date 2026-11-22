#include "FortRewardInfoWidget.h"

UFortRewardInfoWidget::UFortRewardInfoWidget() {
    this->RewardListWidget = NULL;
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
    this->bShowDescription = false;
    this->bAllowItemInteraction = false;
    this->MaxNumRewardsShown = -1;
    this->OrWidgetType = NULL;
    this->RewardInfoButtonType = NULL;
    this->ButtonGroup = NULL;
}

void UFortRewardInfoWidget::SetRewards(const FFortRewardInfo& RewardsIn) {
}

void UFortRewardInfoWidget::SetReward(const FFortItemQuantityPair& RewardIn) {
}

void UFortRewardInfoWidget::SetButtonGroup(UCommonButtonGroupLegacy* InButtonGroup) {
}

bool UFortRewardInfoWidget::ContainsReward(const FString& TemplateIdToCheck) {
    return false;
}


