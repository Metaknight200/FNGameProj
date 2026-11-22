#include "GameplayEffectVolume.h"

AGameplayEffectVolume::AGameplayEffectVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayEffect = NULL;
    this->GameplayEffectLevel = 1;
}

void AGameplayEffectVolume::RemoveGameplayEffect(AActor* Actor) {
}

void AGameplayEffectVolume::ApplyGameplayEffect(AActor* Actor) {
}


