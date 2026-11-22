#include "BodyguardSoundActor.h"
#include "Components/SceneComponent.h"

ABodyguardSoundActor::ABodyguardSoundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}






