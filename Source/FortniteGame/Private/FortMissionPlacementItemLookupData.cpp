#include "FortMissionPlacementItemLookupData.h"

FFortMissionPlacementItemLookupData::FFortMissionPlacementItemLookupData() {
    // Initialize reflected value fields omitted by the dump.
    this->SpawnLocation = FVector::ZeroVector;
    this->SpawnRotation = FRotator::ZeroRotator;
    this->ActorToPlace = NULL;
    this->ActorToUseForSpawnLocation = NULL;
    this->SpawnedActor = NULL;
    this->bDontCreateSpawnRiftsNearby = false;
    this->bShouldFreeLocationsOnDeath = false;
}

