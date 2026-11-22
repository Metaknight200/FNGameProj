#include "PlayspaceComponent_SpatialGameplay.h"

UPlayspaceComponent_SpatialGameplay::UPlayspaceComponent_SpatialGameplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bSubscribeToMeshNetwork = true;
}


