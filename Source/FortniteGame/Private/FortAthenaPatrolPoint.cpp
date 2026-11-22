#include "FortAthenaPatrolPoint.h"
#include "Components/SceneComponent.h"

AFortAthenaPatrolPoint::AFortAthenaPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->LocalGameplayBehavior = NULL;
}


