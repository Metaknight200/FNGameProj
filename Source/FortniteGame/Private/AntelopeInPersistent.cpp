#include "AntelopeInPersistent.h"

FAntelopeInPersistent::FAntelopeInPersistent() {
    // Initialize reflected value fields omitted by the dump.
    this->BackLeanSocketPosition = FVector::ZeroVector;
    this->BounceOffsetBack = FVector::ZeroVector;
    this->FortAntelopeVehicleConfigs = NULL;
    this->bIsBoosting = false;
    this->NaturalSlideState = ENaturalSlideState::None;
    this->TopSpeedCurrentMultiplier = 0.00f;
    this->PushForceCurrentMultiplier = 0.00f;
    this->LeanImpulseScaleBack = 0.00f;
    this->BounceForceBack = 0.00f;
}

