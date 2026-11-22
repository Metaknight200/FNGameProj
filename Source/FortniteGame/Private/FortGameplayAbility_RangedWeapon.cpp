#include "FortGameplayAbility_RangedWeapon.h"

UFortGameplayAbility_RangedWeapon::UFortGameplayAbility_RangedWeapon() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityCosts.AddDefaulted(2);
    this->FiringNoiseRange = 2048.00f;
    this->FlyByNoiseRange = 1000.00f;
    this->CurrentWeapon = NULL;
}


