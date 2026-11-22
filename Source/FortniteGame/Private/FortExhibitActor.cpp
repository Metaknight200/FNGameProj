#include "FortExhibitActor.h"
#include "Components/SceneComponent.h"

AFortExhibitActor::AFortExhibitActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->CameraFOV = 70.00f;
}


