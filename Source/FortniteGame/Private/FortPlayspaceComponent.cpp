#include "FortPlayspaceComponent.h"

UFortPlayspaceComponent::UFortPlayspaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSubscribeToMeshNetwork = false;
}

void UFortPlayspaceComponent::OnMeshNetworkReady(EMeshNetworkNodeType NodeType) {
}

void UFortPlayspaceComponent::OnMeshNetworkEventStart(const FName& EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}

void UFortPlayspaceComponent::OnMeshNetworkEventEnd(const FName& EventName, const EMeshNetworkNodeType NodeType) {
}

void UFortPlayspaceComponent::OnMeshNetworkEventChange(const FName& EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}

void UFortPlayspaceComponent::OnMeshNetworkEventBurst(const FName& EventName, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}


