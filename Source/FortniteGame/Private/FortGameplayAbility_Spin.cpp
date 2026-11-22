#include "FortGameplayAbility_Spin.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_Spin::UFortGameplayAbility_Spin() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->ActivationType = EFortGameplayAbilityActivation::Triggered;
    this->ActionName = TEXT("Spin");
}


