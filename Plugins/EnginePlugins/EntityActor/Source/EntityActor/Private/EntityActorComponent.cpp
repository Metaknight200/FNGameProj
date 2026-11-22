#include "EntityActorComponent.h"
#include "Net/UnrealNetwork.h"

UEntityActorComponent::UEntityActorComponent() {
    this->ActorComponent = NULL;
    this->bCreatedActorComponent = false;
}

void UEntityActorComponent::OnRep_ActorComponent() {
}

void UEntityActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEntityActorComponent, ActorComponent);
}


