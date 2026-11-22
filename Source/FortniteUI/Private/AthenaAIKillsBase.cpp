#include "AthenaAIKillsBase.h"

UAthenaAIKillsBase::UAthenaAIKillsBase() {
    this->KillsText = NULL;
    this->KillsSource = NULL;
    this->bCustomKillSource = false;
}

void UAthenaAIKillsBase::SetKillsSourcePlayerState(AFortPlayerStateAthena* InPlayerState) {
}

void UAthenaAIKillsBase::SetKillsSourcePlayerController(AFortPlayerControllerAthena* InPlayerController) {
}


