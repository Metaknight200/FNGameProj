#include "EQSActorSpawnerData.h"

FEQSActorSpawnerData::FEQSActorSpawnerData() {
    // Initialize reflected value fields omitted by the dump.
    this->SpawnLocationOffset = FVector::ZeroVector;
    this->bEnabled = false;
    this->SpawningTrigger = EEQSActorSpawnerTriggerType::Manual;
    this->SafeZoneStateToStartSpawning = EFortSafeZoneState::None;
    this->SafeZoneIndexToSpawnIn = 0;
    this->bAvoidRepeatClassSpawning = false;
    this->BasePlacementQuery = NULL;
    this->SpawnActorPlacementQuery = NULL;
    this->bIncludeMutatorBasePlacementQueryResults = false;
    this->SpawnedActorRemovalQuery = NULL;
    this->BaseQueryingAttemptIntervalTimeSeconds = 0.00f;
    this->SpawnedActorRemovalQueryInterval = 0.00f;
}

