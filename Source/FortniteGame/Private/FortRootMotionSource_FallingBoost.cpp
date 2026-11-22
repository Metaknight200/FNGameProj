#include "FortRootMotionSource_FallingBoost.h"

FFortRootMotionSource_FallingBoost::FFortRootMotionSource_FallingBoost() {
    // Initialize reflected value fields omitted by the dump.
    this->LastDesiredVelocity = FVector::ZeroVector;
    this->LatestRepMovementLocation = FVector::ZeroVector;
    this->StartLocation = FVector::ZeroVector;
    this->StartVelocity = FVector::ZeroVector;
    this->VerticalImpulse = 0.00f;
    this->GravityScalar = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->LateralFriction = 0.00f;
    this->MaxLateralSpeed = 0.00f;
    this->bHasAppliedVerticalImpulse = false;
}

