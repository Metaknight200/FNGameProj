#include "GameStartCountdownWidget.h"
#include "FortAthenaMutator_GameStartCountdown.h"

UGameStartCountdownWidget::UGameStartCountdownWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_GameStartCountdown::StaticClass();
    this->CountdownMusicStinger = NULL;
    this->GameStartCountdownMutator = NULL;
}



USoundBase* UGameStartCountdownWidget::GetCountdownMusicStinger() const {
    return NULL;
}


