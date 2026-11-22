#include "CachedWaterData.h"

FCachedWaterData::FCachedWaterData() {
    // Initialize reflected value fields omitted by the dump.
    this->PlaneLocation = FVector::ZeroVector;
    this->PlaneNormal = FVector::ZeroVector;
    this->SurfacePosition = FVector::ZeroVector;
    this->WaterVelocity = FVector::ZeroVector;
    this->Depth = 0.00f;
    this->WaterBodyIndex = 0;
}

