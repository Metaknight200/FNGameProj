#include "FortGameplayCueNotify_Looping.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"

AFortGameplayCueNotify_Looping::AFortGameplayCueNotify_Looping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->StartSound = NULL;
    this->StopSound = NULL;
    this->StartParticleSystem = NULL;
    this->StopParticleSystem = NULL;
    this->bStayAttached = true;
    this->bSnapToAttachPointAndPreserveWorldRotation = false;
    this->bUseHitResult = false;
    this->bUseWeapon = false;
    this->bIgnoreRotation = false;
    this->PoolingMethod = EPSCPoolMethod::AutoRelease;
    this->bIsValid = true;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->ParticleSystemComponent = (UParticleSystemComponent*)RootComponent;
    this->AudioComponent->SetupAttachment(RootComponent);
}





USceneComponent* AFortGameplayCueNotify_Looping::GetTargetComponent(AActor* TargetActor, const FGameplayCueParameters& Parameters) const {
    return NULL;
}

bool AFortGameplayCueNotify_Looping::GetSpawnTransform(AActor* TargetActor, FName AttachPointName, const FGameplayCueParameters& Parameters, FTransform& OutTransform) const {
    return false;
}


