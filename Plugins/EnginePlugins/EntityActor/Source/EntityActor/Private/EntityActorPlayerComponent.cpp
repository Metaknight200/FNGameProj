#include "EntityActorPlayerComponent.h"
#include "Net/UnrealNetwork.h"

UEntityActorPlayerComponent::UEntityActorPlayerComponent() {
}

void UEntityActorPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEntityActorPlayerComponent, PlayerID);
}


