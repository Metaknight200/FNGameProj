#include "MoleTeleportPoint.h"
#include "Components/SceneComponent.h"

AMoleTeleportPoint::AMoleTeleportPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
    this->SpawnPoint->SetupAttachment(RootComponent);
}


