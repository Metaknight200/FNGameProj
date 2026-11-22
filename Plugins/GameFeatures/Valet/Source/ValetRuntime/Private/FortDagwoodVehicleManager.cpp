#include "FortDagwoodVehicleManager.h"

UFortDagwoodVehicleManager::UFortDagwoodVehicleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasUpdatedPropReplacement = false;
    this->NumVehiclesSpawnedWithMod = 0;
}

void UFortDagwoodVehicleManager::UpdatePropReplacement() {
}

void UFortDagwoodVehicleManager::OnVehicleSpawnsUpdated(UFortVehicleItemDefinition* VehicleItemDef, TArray<AActor*>& SpawnedVehicles, int32 NewVehicleCount) {
}

void UFortDagwoodVehicleManager::OnVehicleSpawned(AFortAthenaVehicle* Vehicle) {
}

void UFortDagwoodVehicleManager::CustomHandleActorStreamedInEditor(AActor* SourceActor) {
}


