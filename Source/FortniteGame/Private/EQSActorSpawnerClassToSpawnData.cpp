#include "EQSActorSpawnerClassToSpawnData.h"

FEQSActorSpawnerClassToSpawnData::FEQSActorSpawnerClassToSpawnData() {
    this->SpawnActorType = EEQSActorSpawnerSpawnType::Actor;
    this->ActorClassToSpawn = NULL;
    this->AdjustSpawnedActorToGroundLocationTraceZOffset = 0.00f;
    this->AISpawnerData = NULL;
    this->PickupClassToSpawn = NULL;
    this->PickupItemDefinition = NULL;
}

