#include "FortGameplayAbility_LeadingTeam.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_LeadingTeam::UFortGameplayAbility_LeadingTeam() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ActivationType = EFortGameplayAbilityActivation::Passive;
    this->LeaderAbilitySetToApply = NULL;
}

void UFortGameplayAbility_LeadingTeam::ApplyLeaderAbilitySet() {
}


