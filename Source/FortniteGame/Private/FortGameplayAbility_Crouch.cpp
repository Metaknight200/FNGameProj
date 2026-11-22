#include "FortGameplayAbility_Crouch.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_Crouch::UFortGameplayAbility_Crouch() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ActivationType = EFortGameplayAbilityActivation::Triggered;
}


