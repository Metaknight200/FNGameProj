#include "BuildingEditModeSupport_Roof.h"
#include "BuildingEditModeMetadata_Roof.h"

UBuildingEditModeSupport_Roof::UBuildingEditModeSupport_Roof() {
    this->ExpectedMetadataClass = UBuildingEditModeMetadata_Roof::StaticClass();
    this->bCanRotateMetadataToMatch = true;
}


