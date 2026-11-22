#include "BGAConsumableSpawner.h"
#include "Components/SceneComponent.h"

ABGAConsumableSpawner::ABGAConsumableSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
    this->DummyRoot = (USceneComponent*)RootComponent;
    this->AssociatedBuildingActor = NULL;
    this->QueryTemplate = NULL;
    this->bAlignSpawnedActorsToSurface = true;
}


