#include "SKPushVehicleInPersistent.h"

FSKPushVehicleInPersistent::FSKPushVehicleInPersistent() {
    // Initialize reflected value fields omitted by the dump.
    this->PushForceRelativeLocation = FVector::ZeroVector;
    this->SKPushVehicleConfigs = NULL;
    this->bIsDriverTargetting = false;
    this->bPedalForceCooldown = false;
    this->bConstrainedRotation = false;
    this->bIsCoastingOrDismounting = false;
    this->CurrentPhysicsCoastState = ECoastState::Idle;
    this->CurrentAnimCoastState = ECoastState::Idle;
    this->BrakeAboveTopSpeedDelta = 0.00f;
    this->TopSpeedCurrentMultiplier = 0.00f;
}

