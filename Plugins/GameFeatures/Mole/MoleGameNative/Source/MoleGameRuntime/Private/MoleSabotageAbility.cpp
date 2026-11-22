#include "MoleSabotageAbility.h"

UMoleSabotageAbility::UMoleSabotageAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->InterruptionType = EMoleSabotageInterruptionType::Interrupt;
}




EMoleSabotageInterruptionType UMoleSabotageAbility::GetInterruptionType() const {
    return EMoleSabotageInterruptionType::Interrupt;
}

void UMoleSabotageAbility::GetAllValidSabotageTargets(TArray<APlayerState*>& OutValidTargets) const {
}

void UMoleSabotageAbility::GetAllSaboteurs(TArray<APlayerState*>& OutAllSaboteurs) const {
}


