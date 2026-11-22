#include "FortGameplayAbility_AITurnTransition.h"

UFortGameplayAbility_AITurnTransition::UFortGameplayAbility_AITurnTransition() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->bRelevantForAIDespawning = false;
    this->MinTurnTransitionYawAngle = 45.00f;
    this->bPickedTurnTransitionUsesMontage = true;
    this->PickedTurnYawRotationRate = 0.00f;
    this->StartingDesiredRotationYawDelta = 0.00f;
    this->PickedTurnTime = 0.00f;
}

void UFortGameplayAbility_AITurnTransition::GetTurnTransitionMontageSectionNameAndYawRotationRate(FName& MontageSectionName, float& TurnYawRotationRate, float& DesiredRotationYawDelta, float& TurnTime, bool& bTurnTransitionUsesMontage) const {
}


