#include "DynamicBuildingFoundationRepData.h"

FDynamicBuildingFoundationRepData::FDynamicBuildingFoundationRepData() {
    // Initialize reflected value fields omitted by the dump.
    this->Rotation = FRotator::ZeroRotator;
    this->Translation = FVector::ZeroVector;
    this->EnabledState = EDynamicFoundationEnabledState::Unknown;
}

