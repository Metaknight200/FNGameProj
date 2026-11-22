#include "ProjectileHomingData.h"

FProjectileHomingData::FProjectileHomingData() {
    // Initialize reflected value fields omitted by the dump.
    this->LockedOnTargetPosition = FVector::ZeroVector;
    this->TargetOffset = FVector::ZeroVector;
    this->HomingStyle = EFortHomingStyle::None;
    this->MinTurnSpeed = 0.00f;
    this->MaxTurnSpeed = 0.00f;
    this->RampTimeFromMinToMaxTurnSpeed = 0.00f;
    this->LockTargetDistanceThreshold = 0.00f;
    this->RandomSeed = 0;
    this->ResetTurnSpeedTimer = false;
}

