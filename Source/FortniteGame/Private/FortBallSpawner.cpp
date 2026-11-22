#include "FortBallSpawner.h"
#include "Components/SphereComponent.h"

AFortBallSpawner::AFortBallSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Scene"));
    this->BallToSpawn = NULL;
    this->SphereComp = (USphereComponent*)RootComponent;
}


