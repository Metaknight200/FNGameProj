#include "AthenaNavMesh.h"

AAthenaNavMesh::AAthenaNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoDestroyWhenNoNavigation = false;
    this->bDrawMarkedForbiddenPolys = true;
    this->HotSpotPathfindingMaxSearchNodes = 384;
}

void AAthenaNavMesh::MoveTiles(const FBox& SourceBox, const FIntPoint& TileOffset, const float RotationDeg, const FVector2D& FillerTilePosition) {
}

void AAthenaNavMesh::ComputeOffsetForMoveTiles(const FVector& StartPosition, const FVector& DesiredPosition, FVector& OutEndPosition, FIntPoint& OutTileOffset) {
}


