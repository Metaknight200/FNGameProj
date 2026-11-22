#include "DagwoodNetworkPhysicsComponent.h"
#include "Net/UnrealNetwork.h"

UDagwoodNetworkPhysicsComponent::UDagwoodNetworkPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UDagwoodNetworkPhysicsComponent::SetState_GT(const FDagwoodInPersistent& In) {
}

void UDagwoodNetworkPhysicsComponent::SetPendingInputCmd(const FFortDagwoodCmd& In) {
}

FDagwoodState_PT UDagwoodNetworkPhysicsComponent::GetState_PT() const {
    return FDagwoodState_PT{};
}

FDagwoodInPersistent UDagwoodNetworkPhysicsComponent::GetState_GT() const {
    return FDagwoodInPersistent{};
}

FFortDagwoodCmd UDagwoodNetworkPhysicsComponent::GetPendingInputCmd() const {
    return FFortDagwoodCmd{};
}

void UDagwoodNetworkPhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDagwoodNetworkPhysicsComponent, NetworkPhysicsState);
    DOREPLIFETIME(UDagwoodNetworkPhysicsComponent, ReplicatedManagedState);
}


