#include "LockOnInfo.h"

FLockOnInfo::FLockOnInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->CamRotAtTargetAcquisiton = FRotator::ZeroRotator;
    this->LockOnCoords = FVector2D::ZeroVector;
    this->State = ELockOnState::NoTarget;
    this->TargetAcquisitionTime = 0.00f;
    this->TargetLockOnTime = 0.00f;
    this->TargetOutOfSightTime = 0.00f;
    this->CooldownStartTime = 0.00f;
}

