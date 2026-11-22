#include "FortHLODSMActor.h"
#include "Components/SceneComponent.h"

AFortHLODSMActor::AFortHLODSMActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->bIsDynamic = false;
    this->bStartHidden = false;
    this->MaxDrawDistanceMultiplier = 1.00f;
    this->StaticMeshComponent = NULL;
}


