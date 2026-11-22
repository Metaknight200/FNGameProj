#include "AthenaAISystem.h"

UAthenaAISystem::UAthenaAISystem() {
    this->PerceptionManager = NULL;
    this->AIDropper = NULL;
    this->AISpawner = NULL;
    this->AIServiceManager = NULL;
    this->AIPopulationTracker = NULL;
}

void UAthenaAISystem::AIProfiling_OnSafeZoneUpdated() {
}

void UAthenaAISystem::AIProfiling_OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}


