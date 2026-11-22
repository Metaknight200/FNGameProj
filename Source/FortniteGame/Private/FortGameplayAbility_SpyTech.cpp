#include "FortGameplayAbility_SpyTech.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_SpyTech::UFortGameplayAbility_SpyTech() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ActivationType = EFortGameplayAbilityActivation::Passive;
}



