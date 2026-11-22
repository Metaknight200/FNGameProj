#include "BuildingEditModeSupport_Floor.h"
#include "BuildingEditModeMetadata_Floor.h"

UBuildingEditModeSupport_Floor::UBuildingEditModeSupport_Floor() {
    this->ExpectedMetadataClass = UBuildingEditModeMetadata_Floor::StaticClass();
    this->bCanRotateMetadataToMatch = true;
}


