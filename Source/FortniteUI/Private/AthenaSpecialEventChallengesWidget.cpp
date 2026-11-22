#include "AthenaSpecialEventChallengesWidget.h"

UAthenaSpecialEventChallengesWidget::UAthenaSpecialEventChallengesWidget() {
    this->UrgentQuestMessagingStartBuffer = 5.00f;
    this->AttachedPlayerState = NULL;
}

void UAthenaSpecialEventChallengesWidget::HandleUrgentQuestStarted(const FUrgentQuestData& InUrgentQuestData, const float EventTimeRemaining) {
}

void UAthenaSpecialEventChallengesWidget::HandleUrgentQuestEnded(const FGameplayTag& EventTag) {
}

void UAthenaSpecialEventChallengesWidget::HandleClearAllUrgentQuestEntries() {
}


