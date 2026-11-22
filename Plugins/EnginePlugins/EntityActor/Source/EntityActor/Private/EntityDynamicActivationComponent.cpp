#include "EntityDynamicActivationComponent.h"
#include "Net/UnrealNetwork.h"

UEntityDynamicActivationComponent::UEntityDynamicActivationComponent() {
    this->TransitionTargetTime = 0.00f;
    this->bTargetState = false;
}

void UEntityDynamicActivationComponent::OnRep_TransitionTarget() {
}

void UEntityDynamicActivationComponent::OnEnabledChanged(bool bIsEnabled) {
}

void UEntityDynamicActivationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEntityDynamicActivationComponent, TransitionTargetTime);
    DOREPLIFETIME(UEntityDynamicActivationComponent, bTargetState);
    DOREPLIFETIME(UEntityDynamicActivationComponent, LinkedComponents);
}


