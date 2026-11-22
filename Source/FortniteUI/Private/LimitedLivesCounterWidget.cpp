#include "LimitedLivesCounterWidget.h"
#include "FortAthenaMutator_BasicLimitedLives.h"

ULimitedLivesCounterWidget::ULimitedLivesCounterWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_BasicLimitedLives::StaticClass();
    this->MaxLives = 0;
}

void ULimitedLivesCounterWidget::OnPlayerDied(AFortPlayerStateAthena* DeadPlayer) {
}

void ULimitedLivesCounterWidget::OnLivesCountUpdated_Implementation(int32 NewCount) {
}


