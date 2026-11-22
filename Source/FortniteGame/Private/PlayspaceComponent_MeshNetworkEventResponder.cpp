#include "PlayspaceComponent_MeshNetworkEventResponder.h"

UPlayspaceComponent_MeshNetworkEventResponder::UPlayspaceComponent_MeshNetworkEventResponder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bSubscribeToMeshNetwork = true;
}


