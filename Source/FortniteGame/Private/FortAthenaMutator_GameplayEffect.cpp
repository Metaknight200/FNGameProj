#include "FortAthenaMutator_GameplayEffect.h"

AFortAthenaMutator_GameplayEffect::AFortAthenaMutator_GameplayEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayEffectClass = NULL;
    this->GameplayEffectLevel = 1.00f;
    this->bEnableMutator = false;
}


