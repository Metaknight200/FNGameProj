#include "EQSActorSpawner.h"

UEQSActorSpawner::UEQSActorSpawner() {
    this->OwningActorSpawnerMutator = NULL;
}

void UEQSActorSpawner::OnFindActorSpawnLocationQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus) {
}

FEQSActorSpawnerData UEQSActorSpawner::GetSpawnerData() {
    return FEQSActorSpawnerData{};
}


