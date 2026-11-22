#include "FortMission_ActiveThreat.h"

AFortMission_ActiveThreat::AFortMission_ActiveThreat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartBasedOnAthenaGamePhases = false;
    this->StartingGamePhase = EAthenaGamePhase::Count;
    this->StartingDelay = 0.00f;
    this->StartingActiveThreatEncounterIndex = 0;
    this->SyncedEncounterStartingTime = 0.00f;
    this->CurrentActiveThreatEncounterIndex = 0;
}

void AFortMission_ActiveThreat::HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortMission_ActiveThreat::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}


