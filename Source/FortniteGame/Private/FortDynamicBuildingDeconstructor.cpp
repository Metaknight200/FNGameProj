#include "FortDynamicBuildingDeconstructor.h"
#include "Components/SceneComponent.h"

AFortDynamicBuildingDeconstructor::AFortDynamicBuildingDeconstructor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->bDebugDrawBounds = false;
    this->bSelectiveDestruction = false;
    this->bIgnoreMissionActors = false;
    this->bShrinkAndDestroyEffect = false;
    this->NumOfPiecesToDestroyAtOnce = 10;
    this->TimeBetweenChunks = 0.20f;
    this->CurrentIndex = 0;
}


