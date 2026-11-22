#include "FortAthenaAIBotAimingDigestedSkillSet.h"

UFortAthenaAIBotAimingDigestedSkillSet::UFortAthenaAIBotAimingDigestedSkillSet() {
    this->bAllowScanAroundWhileSwimming = false;
    this->TrackingReactionTime = 0.50f;
    this->TrackingInterpTime = 0.20f;
    this->TrackingInterpTimeMultForGroundVehicles = 2.00f;
    this->TrackingInterpTimeMultForFlyingVehicles = 10.00f;
    this->MaxTrackingPredictionError = 0.20f;
    this->MaxTrackingOffsetErrorMultiplier = 1.00f;
    this->AdjustedTrackingOffsetErrorMultiplierAgainstAIs = 1.00f;
    this->TrackingErrorUpdateInterval = 0.50f;
    this->TrackingInAirVelocityThreshold = 1000.00f;
    this->TrackingInAirHeightDeltaThreshold = 2000.00f;
    this->TargetAcquisitionRate = 0.99f;
    this->MaxDistanceEvaluationErrorRatio = 0.50f;
    this->TargetingUpdateInterval = 3.00f;
    this->TargetingUpdateIntervalMaxDeviation = 1.00f;
    this->ReachLeashLimitToleranceDistance = 250.00f;
    this->bShootFloorTrapOnlyWhenHigherThanTrap = false;
    this->CachedWeaponUsedToCalculateAccuracy = NULL;
}


