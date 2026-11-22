#include "ProjectileMovementDrunkConfig.h"

FProjectileMovementDrunkConfig::FProjectileMovementDrunkConfig() {
    this->DrunkSpeedScaleCurve = NULL;
    this->DrunkGravityScaleCurve = NULL;
    this->InitialDelay = 0.00f;
    this->Duration = 0.00f;
    this->DirectionChangeRate = 0.00f;
    this->TurnAngle = 0.00f;
    this->MinPitch = 0.00f;
    this->TurnAngleClamp = 0.00f;
}

