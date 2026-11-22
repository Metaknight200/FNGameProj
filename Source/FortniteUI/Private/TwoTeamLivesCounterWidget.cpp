#include "TwoTeamLivesCounterWidget.h"
#include "FortAthenaMutator_BasicLimitedLives.h"

UTwoTeamLivesCounterWidget::UTwoTeamLivesCounterWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_BasicLimitedLives::StaticClass();
    this->CurrentPlayerState = NULL;
}

void UTwoTeamLivesCounterWidget::OnPlayerDied(AFortPlayerStateAthena* DeadPlayer) {
}





