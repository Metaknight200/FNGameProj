#include "BuildingEditModeSupport_Stair.h"
#include "BuildingEditModeMetadata_Stair.h"

UBuildingEditModeSupport_Stair::UBuildingEditModeSupport_Stair() {
    this->ExpectedMetadataClass = UBuildingEditModeMetadata_Stair::StaticClass();
    this->bCanMirrorMetadataToMatch = true;
    this->bCanRotateMetadataToMatch = true;
    this->StairPreviewMetadata = NULL;
    this->LastValidMetadataConfiguration = NULL;
    this->ActivatedAuxIndicatorComponent = NULL;
}


