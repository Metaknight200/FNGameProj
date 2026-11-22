#include "FortEventResponderComponent.h"

UFortEventResponderComponent::UFortEventResponderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bServerRespondToEvents = true;
    this->bClientRespondToEvents = true;
}

void UFortEventResponderComponent::OnMeshNetworkReady(EMeshNetworkNodeType NodeType) {
}


