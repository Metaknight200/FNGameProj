#include "HydrogenPathActor.h"
#include "Components/SceneComponent.h"

AHydrogenPathActor::AHydrogenPathActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


