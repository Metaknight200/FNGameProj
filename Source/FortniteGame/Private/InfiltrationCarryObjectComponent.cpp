#include "InfiltrationCarryObjectComponent.h"
#include "Net/UnrealNetwork.h"

UInfiltrationCarryObjectComponent::UInfiltrationCarryObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInteractable = false;
}

uint8 UInfiltrationCarryObjectComponent::GetDefendingTeam() const {
    return 0;
}

uint8 UInfiltrationCarryObjectComponent::GetAttackingTeam() const {
    return 0;
}

void UInfiltrationCarryObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInfiltrationCarryObjectComponent, ParentSpawnPoint);
    DOREPLIFETIME(UInfiltrationCarryObjectComponent, CachedMutator);
    DOREPLIFETIME(UInfiltrationCarryObjectComponent, bIsInteractable);
}


