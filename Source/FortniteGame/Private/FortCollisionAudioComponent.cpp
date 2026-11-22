#include "FortCollisionAudioComponent.h"

UFortCollisionAudioComponent::UFortCollisionAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckCollisionLeashInterval = 0.50f;
}

void UFortCollisionAudioComponent::SetCollisionSoundAtIndex(int32 Index, USoundBase* SoundToUse) {
}

void UFortCollisionAudioComponent::OnCollision(const FVector& HitLocation, const FVector& HitNormalImpulse, bool& OutResult, float& OutMagnitude) {
}


