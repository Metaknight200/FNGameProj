#include "FortVehicleInPersistent.h"

FFortVehicleInPersistent::FFortVehicleInPersistent() {
    // Initialize reflected value fields omitted by the dump.
    this->LocalFrontFrictionPt = FVector::ZeroVector;
    this->LocalRearFrictionPt = FVector::ZeroVector;
    this->FortPhysicsVehicleConfigs = NULL;
    this->bUseForceHeading = false;
    this->bHasDriver = false;
    this->bHasPassengers = false;
    this->bIsTouchingAnything = false;
    this->bAttemptAsyncOrientationCorrection = false;
    this->bUseGravity = false;
    this->WaterLevel = 0.00f;
    this->FrontMassRatio = 0.00f;
    this->RearMassRatio = 0.00f;
}

