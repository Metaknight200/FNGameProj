#include "FortAthenaMutator_EQSActorSpawner.h"

AFortAthenaMutator_EQSActorSpawner::AFortAthenaMutator_EQSActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MutatorBasePlacementQuery = NULL;
    this->MutatorBaseQueryingAttemptIntervalTimeSeconds = 0.10f;
}

bool AFortAthenaMutator_EQSActorSpawner::StartSpawningManually(const FName& NameId, int32 OptionalActivationId) {
    return false;
}

bool AFortAthenaMutator_EQSActorSpawner::ShouldOverrideClassesToSpawn_Implementation(TArray<FEQSActorSpawnerClassToSpawnData>& OutOverrideClassesToSpawn, const FEQSActorSpawnerData& SpawnerData) {
    return false;
}





UEQSActorSpawner* AFortAthenaMutator_EQSActorSpawner::GetEQSActorSpawnerByNameId(const FName& NameId) {
    return NULL;
}


