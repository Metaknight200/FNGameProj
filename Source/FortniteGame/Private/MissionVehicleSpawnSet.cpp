#include "MissionVehicleSpawnSet.h"

FMissionVehicleSpawnSet::FMissionVehicleSpawnSet() {
    // Initialize reflected value fields omitted by the dump.
    this->SpawnOffset = FVector::ZeroVector;
    this->VehicleClass = NULL;
    this->MinSpawnCount = 0;
    this->MaxSpawnCount = 0;
    this->OccupiedLocationGameplayEffect = NULL;
    this->OccupiedLocationGameplayEffectLevel = 0;
}

