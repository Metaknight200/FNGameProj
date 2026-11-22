#include "FortControllerComponent_ClientsideLeaderboardLogic.h"

UFortControllerComponent_ClientsideLeaderboardLogic::UFortControllerComponent_ClientsideLeaderboardLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedGameState = NULL;
}

void UFortControllerComponent_ClientsideLeaderboardLogic::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}


