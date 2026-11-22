#include "BuildingFoundationStreamingData.h"

FBuildingFoundationStreamingData::FBuildingFoundationStreamingData() {
    // Initialize reflected value fields omitted by the dump.
    this->BoundingBox = FBox(ForceInit);
    this->FoundationLocation = FVector::ZeroVector;
    this->GridCoordinates = FIntPoint::ZeroValue;
    this->PersistentHLODLevelIndex = 0;
}

