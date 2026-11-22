#include "AthenaPlayerKillsBase.h"

UAthenaPlayerKillsBase::UAthenaPlayerKillsBase() {
    this->KillsText = NULL;
    this->KillsSource = NULL;
    this->bCustomKillSource = false;
}

void UAthenaPlayerKillsBase::SetKillsSourcePlayerState(AFortPlayerStateAthena* InPlayerState) {
}

void UAthenaPlayerKillsBase::SetKillsSourcePlayerController(AFortPlayerControllerAthena* InPlayerController) {
}


