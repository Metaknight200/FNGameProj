#include "CobaltPOICameraActor.h"
#include "Components/SceneComponent.h"

ACobaltPOICameraActor::ACobaltPOICameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TranslationSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TranslationSceneComponent"));
    this->TranslationSceneComponent->SetupAttachment(RootComponent);
}


