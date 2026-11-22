#include "FortHoagieVehicleAnimInstance.h"

UFortHoagieVehicleAnimInstance::UFortHoagieVehicleAnimInstance() {
    this->BoostCardinalDirection = EFortCardinalDirection::North;
    this->EngineRotationInterpSpeed = 360.00f;
    this->EngineRotationDuringBoostInterpSpeed = 1200.00f;
    this->EngineFlipSpeedThreshold = 0.35f;
    this->BoostDirectionDeadzone = 35.00f;
    this->EngineFlipDeadzone = 0.70f;
    this->DriverRoll = 0.00f;
    this->DriverYaw = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->FwdSpeed = 0.00f;
    this->LocalBoostDirection = 0.00f;
    this->YawBlendSpaceInput = 0.00f;
    this->NormalizedAcceleration = 0.00f;
    this->bShouldHideBlades = false;
    this->bIsBoostOnCD = false;
    this->bIsBoostReady = false;
    this->bIsMovingForward = false;
    this->bIsReversing = false;
    this->bIsMovingAnyDirection = false;
    this->bIsBoosting = false;
    this->bShouldReverse = false;
    this->bShouldGoBackToIdle = false;
    this->bShouldApplyBoostAdditive = false;
    this->bIsEngineShuttingOff = false;
    this->bTransition_Default_ReverseStart = false;
    this->bTransition_BoostLoop_Reverse = false;
}


