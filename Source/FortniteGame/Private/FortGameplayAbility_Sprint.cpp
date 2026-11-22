#include "FortGameplayAbility_Sprint.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_Sprint::UFortGameplayAbility_Sprint() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ActivationType = EFortGameplayAbilityActivation::Triggered;
}


