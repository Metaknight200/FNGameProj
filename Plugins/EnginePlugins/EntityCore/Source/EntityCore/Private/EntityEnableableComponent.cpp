#include "EntityEnableableComponent.h"
#include "Net/UnrealNetwork.h"

UEntityEnableableComponent::UEntityEnableableComponent() {
    this->IsEnabled = true;
    this->LastIsEnabled = true;
}

void UEntityEnableableComponent::OnRep_Enabled() {
}

void UEntityEnableableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEntityEnableableComponent, IsEnabled);
}


