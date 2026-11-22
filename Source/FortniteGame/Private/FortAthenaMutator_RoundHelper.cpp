#include "FortAthenaMutator_RoundHelper.h"

AFortAthenaMutator_RoundHelper::AFortAthenaMutator_RoundHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->NumOfRounds = 4;
    this->NumOfTeams = 2;
    this->StartingTeamNum = 3;
}

void AFortAthenaMutator_RoundHelper::StartNextRound() {
}

void AFortAthenaMutator_RoundHelper::SetCurrentRound(int32 NewRound) {
}

void AFortAthenaMutator_RoundHelper::OnInitialTeleportComplete(AFortPlayerPawn* PlayerPawn) {
}

int32 AFortAthenaMutator_RoundHelper::GetNumOfRounds() const {
    return NumOfRounds;
}

int32 AFortAthenaMutator_RoundHelper::GetCurrentRound() const {
    return 0;
}


