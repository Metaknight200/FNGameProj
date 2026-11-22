#include "FortGameplayAbility_AIPortal.h"

UFortGameplayAbility_AIPortal::UFortGameplayAbility_AIPortal() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->bStopsAIBehaviorLogic = true;
    this->PortalLifespan = 4.00f;
}

void UFortGameplayAbility_AIPortal::ModifyCollisions() {
}

bool UFortGameplayAbility_AIPortal::HasPortalOutPoint() const {
    return false;
}

FVector UFortGameplayAbility_AIPortal::GetPortalOutPoint() const {
    return FVector{};
}

FVector UFortGameplayAbility_AIPortal::GetPortalInPoint() const {
    return FVector{};
}

ABuildingSMActor* UFortGameplayAbility_AIPortal::GetPortalBuilding() const {
    return NULL;
}


