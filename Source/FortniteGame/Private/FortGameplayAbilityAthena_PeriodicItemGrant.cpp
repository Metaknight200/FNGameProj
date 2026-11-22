#include "FortGameplayAbilityAthena_PeriodicItemGrant.h"

UFortGameplayAbilityAthena_PeriodicItemGrant::UFortGameplayAbilityAthena_PeriodicItemGrant() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->OwnerControllerCachedValue = NULL;
}

void UFortGameplayAbilityAthena_PeriodicItemGrant::StopItemAwardTimers() {
}

void UFortGameplayAbilityAthena_PeriodicItemGrant::StartItemAwardTimers() {
}


