#include "AthenaLocalPlayerViewModel.h"

UAthenaLocalPlayerViewModel::UAthenaLocalPlayerViewModel() {
    this->PlayerController = NULL;
    this->IndicatorCache = NULL;
}

void UAthenaLocalPlayerViewModel::HandleViewTargetPlayerStateReplicated(AFortPlayerPawn* Pawn) {
}

void UAthenaLocalPlayerViewModel::HandleLocalPlayerChangedTeams() {
}


