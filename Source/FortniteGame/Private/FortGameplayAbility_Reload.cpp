#include "FortGameplayAbility_Reload.h"

UFortGameplayAbility_Reload::UFortGameplayAbility_Reload() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityCosts.AddDefaulted(1);
    this->NumTimesReloaded = 0;
}


