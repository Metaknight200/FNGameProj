#include "FortGameplayAbility_CeilingFallingTrap.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_CeilingFallingTrap::UFortGameplayAbility_CeilingFallingTrap() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ActivationType = EFortGameplayAbilityActivation::Triggered;
    this->TrapProjectileClass = NULL;
    this->TrapCostClass = NULL;
    this->ProjectileSpawnDelay = 0.03f;
}


