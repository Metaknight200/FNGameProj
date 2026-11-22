#include "DrunkHomingConfig.h"

FDrunkHomingConfig::FDrunkHomingConfig() {
    this->DrunkOverrideSpeedCurve = NULL;
    this->DirectionChangeRate = 0.00f;
    this->LookaheadDist = 0.00f;
    this->TurnAngle = 0.00f;
    this->TurnAngleBlendOut = 0.00f;
    this->DrunkDuration = 0.00f;
    this->MinPitch = 0.00f;
    this->RandomTargetPositionRadius = 0.00f;
    this->PassedTargetSlackTime = 0.00f;
    this->TurnAngleClamp = 0.00f;
    this->DrunkBlendOutRange = 0.00f;
    this->DrunkBlendOutTimeThreshold = 0.00f;
    this->DrunkBlendOutTime = 0.00f;
    this->DrunkBlendOutTurnSpeed = 0.00f;
    this->AimPointMaxRange = 0.00f;
}

