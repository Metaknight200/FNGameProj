#include "MeshNetworkComponent.h"

UMeshNetworkComponent::UMeshNetworkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshRelevancy = EMeshNetworkRelevancy::RelevantToClients;
}

EMeshNetworkNodeType UMeshNetworkComponent::GetMeshNetworkNodeType() const {
    return EMeshNetworkNodeType::Root;
}


