#include "BuildingEditModeSupport_Wall.h"
#include "BuildingEditModeMetadata_Wall.h"

UBuildingEditModeSupport_Wall::UBuildingEditModeSupport_Wall() {
    this->ExpectedMetadataClass = UBuildingEditModeMetadata_Wall::StaticClass();
    this->bCanMirrorMetadataToMatch = true;
}


