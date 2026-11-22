#include "FortAthenaUmamiFlyingVehicleDigestedSkillSet.h"

UFortAthenaUmamiFlyingVehicleDigestedSkillSet::UFortAthenaUmamiFlyingVehicleDigestedSkillSet() {
    this->MaxForwardSpeed = 1.00f;
    this->MaxElevationSpeed = 1.00f;
    this->ForwardSpeedCurve = NULL;
    this->ElevationSpeedCurve = NULL;
    this->AlphasDeadZones = 0.01f;
    this->LookAheadMaxDistance = 400.00f;
    this->Min2DGoalDistanceForHeighfieldClamp = 500.00f;
    this->Min2DGoalDistanceForBuildingActorsClamp = 500.00f;
    this->ZOffsetForBuildingActorsClamp = 1000.00f;
    this->MaximumStuckTime = 5.00f;
    this->MinimumProgressPercentageForStuck = 0.00f;
    this->VerticalMovementFirst_MinZDelta = 500.00f;
    this->VerticalMovementFirst_MaxXYDelta = 200.00f;
    this->EvasiveManeuver_DistanceToFinish = 600.00f;
    this->EvasiveManeuver_DistanceToFinishSquared = 360000.00f;
    this->EvasiveManeuver_MinDotDifferenceOnTargetToKeepPreviousManeuver = 0.90f;
    this->EvasiveManeuver_MinDotDifferenceBetweenStartAndCurrentLocationToKeepPreviousManeuver = 0.20f;
    this->EvasiveManeuver_MinDistanceFromGoalToApply = 8000.00f;
    this->EvasiveManeuver_MinDistanceFromGoalToApplySquared = 64000000.00f;
    this->EvasiveManeuver_ForwardDistance = 4000.00f;
    this->EvasiveManeuver_RightDistance = 1500.00f;
    this->EvasiveManeuver_UpDistance = 1000.00f;
    this->Avoidance_Strength = 30.00f;
    this->Avoidance_Min2DGoalDistance = 1500.00f;
    this->Avoidance_MinDistanceToOther = 4000.00f;
    this->Avoidance_SelfLookAheadTime = 2.00f;
    this->Avoidance_OthersLookAheadTime = 1.00f;
    this->Avoidance_SelfRadius = 1000.00f;
    this->Avoidance_OthersRadius = 1000.00f;
    this->Avoidance_HysteresisRadius = 1000.00f;
}


