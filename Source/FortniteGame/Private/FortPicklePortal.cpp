#include "FortPicklePortal.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "SourceEffects/SourceEffectStereoDelay.h"

AFortPicklePortal::AFortPicklePortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RangeCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RangeCollisionComponent"));
    this->PortalParticleSystem = NULL;
    this->SMPortalInner = NULL;
    this->SMPortalOuter = NULL;
    this->SpotLightComponent = NULL;
    this->AudioComponent = NULL;
    this->EffectPreset = CreateDefaultSubobject<USourceEffectStereoDelayPreset>(TEXT("EffectPreset"));
    this->MaterialParameterCollection = NULL;
    this->OpenCurve = NULL;
    this->OpenInterpSpeed = 0.00f;
    this->MaxDistance = 0.00f;
    this->NearDistance = 0.00f;
    this->FadeRadius = 0.00f;
    this->RangeCollisionComponent->SetupAttachment(RootComponent);
}



