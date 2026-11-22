#include "DigestedTargetBasedAccuracy.h"

FDigestedTargetBasedAccuracy::FDigestedTargetBasedAccuracy() {
    this->AimTrackingOffsetErrorMultiplier = 0.00f;
    this->AimTrackingHeightOffsetErrorMultiplier = 0.00f;
    this->AimTrackingDistanceErrorMultiplier = 0.00f;
    this->AimTrackingReactionTimeMultiplier = 0.00f;
    this->AimTrackingInterpTimeMultiplier = 0.00f;
    this->AimTrackingInAirVelocityThresholdMultiplier = 0.00f;
    this->AimTrackinginAirHeightDataThresholdMultiplier = 0.00f;
}

