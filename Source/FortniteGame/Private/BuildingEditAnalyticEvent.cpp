#include "BuildingEditAnalyticEvent.h"

FBuildingEditAnalyticEvent::FBuildingEditAnalyticEvent() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->BuildingType = EFortBuildingType::Wall;
    this->ResourceType = EFortResourceType::Wood;
}

