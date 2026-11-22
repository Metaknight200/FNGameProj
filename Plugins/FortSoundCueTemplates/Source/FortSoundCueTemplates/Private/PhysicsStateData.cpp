#include "PhysicsStateData.h"

FPhysicsStateData::FPhysicsStateData() {
    // Initialize reflected value fields omitted by the dump.
    this->PitchOutput = FVector2D::ZeroVector;
    this->VolumeOutput = FVector2D::ZeroVector;
    this->SlowLoop = NULL;
    this->FastLoop = NULL;
}

