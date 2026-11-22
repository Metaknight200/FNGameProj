#include "LocationLerpData.h"

FLocationLerpData::FLocationLerpData() {
    // Initialize reflected value fields omitted by the dump.
    this->PositionLerp_End = FVector::ZeroVector;
    this->PositionLerp_Start = FVector::ZeroVector;
    this->PositionLerp_Target = FVector::ZeroVector;
    this->TotalLerpTime = 0.00f;
}

