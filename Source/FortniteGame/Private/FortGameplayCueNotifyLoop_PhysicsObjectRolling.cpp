#include "FortGameplayCueNotifyLoop_PhysicsObjectRolling.h"
#include "FortLayeredAudioComponent.h"

AFortGameplayCueNotifyLoop_PhysicsObjectRolling::AFortGameplayCueNotifyLoop_PhysicsObjectRolling(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LayeredAudioComp = CreateDefaultSubobject<UFortLayeredAudioComponent>(TEXT("LayeredAudioComp"));
    this->MaxRollSpeed = 500.00f;
    this->PhysicsObject = NULL;
    this->LayeredAudioComp->SetupAttachment(RootComponent);
}

FVector AFortGameplayCueNotifyLoop_PhysicsObjectRolling::GetHitLocation() const {
    return FVector{};
}


