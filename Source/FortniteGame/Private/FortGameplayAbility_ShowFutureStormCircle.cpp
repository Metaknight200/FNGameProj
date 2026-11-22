#include "FortGameplayAbility_ShowFutureStormCircle.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_ShowFutureStormCircle::UFortGameplayAbility_ShowFutureStormCircle() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->ActivationType = EFortGameplayAbilityActivation::Passive;
}

void UFortGameplayAbility_ShowFutureStormCircle::HandleSafeZoneUpdated() {
}


