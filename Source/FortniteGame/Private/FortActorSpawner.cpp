#include "FortActorSpawner.h"
#include "Components/SceneComponent.h"

AFortActorSpawner::AFortActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SpawnerAuthority = EFortActorSpawnerAuthority::ServerAuthoritative;
    this->bSpawnOnBeginPlay = true;
    this->bDestroyAfterSpawn = true;
}

bool AFortActorSpawner::TrySpawnActor() {
    return false;
}



