#include "FortNavMesh.h"

AFortNavMesh::AFortNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceRebuildOnLoad = true;
    this->bFilterLowSpanSequences = true;
    this->bStoreEmptyTileLayers = true;
    this->HotSpotManager = NULL;
}


