#include "FortCreativeTimerObjective.h"

AFortCreativeTimerObjective::AFortCreativeTimerObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Volume = NULL;
    this->MaintainInteractionWhileLookingAround = false;
}

void AFortCreativeTimerObjective::SetHUDData(FTimerObjectiveHUDData NewHUDData) {
}

void AFortCreativeTimerObjective::OnGameStateSet(AFortGameState* GameState) {
}

void AFortCreativeTimerObjective::BroadcastUpdateToHUD() {
}




void AFortCreativeTimerObjective::AddTimerObjectiveToVolume() {
}


