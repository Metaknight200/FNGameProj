#include "FortEnemySpawn.h"
#include "Components/SceneComponent.h"

AFortEnemySpawn::AFortEnemySpawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->ClusterRadius = 0.00f;
}


