#include "ReplicationGraphNode_FortVolumeGrid.h"

UReplicationGraphNode_FortVolumeGrid::UReplicationGraphNode_FortVolumeGrid() {
    this->FortVolume = NULL;
    this->FortVolumeGrid2D = NULL;
    this->FortVolumeGlobalRelevancyNode = NULL;
}

void UReplicationGraphNode_FortVolumeGrid::HandleStreamedLevelUnloaded() {
}

void UReplicationGraphNode_FortVolumeGrid::HandleStreamedLevelShown() {
}

void UReplicationGraphNode_FortVolumeGrid::HandleStreamedLevelLoaded() {
}

void UReplicationGraphNode_FortVolumeGrid::HandleStreamedLevelHidden() {
}


