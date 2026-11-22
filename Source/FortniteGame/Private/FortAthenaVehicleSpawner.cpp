#include "FortAthenaVehicleSpawner.h"
#include "Components/SceneComponent.h"

AFortAthenaVehicleSpawner::AFortAthenaVehicleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DummyRoot = (USceneComponent*)RootComponent;
    this->bCanSpawnWithMod = true;
    this->bForceSpawnAlways = false;
    this->CachedFortVehicleItemDef = NULL;
    this->bIsVehicleItemDefCached = false;
}

void AFortAthenaVehicleSpawner::SpawnVehicle_Implementation() {
}

UClass* AFortAthenaVehicleSpawner::GetVehicleClass() const {
    return NULL;
}

bool AFortAthenaVehicleSpawner::GetForceSpawnAlways() const {
    return false;
}


