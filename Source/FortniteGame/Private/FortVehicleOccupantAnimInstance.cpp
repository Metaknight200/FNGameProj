#include "FortVehicleOccupantAnimInstance.h"

UFortVehicleOccupantAnimInstance::UFortVehicleOccupantAnimInstance() {
    this->VehicleAnimSet = NULL;
    this->Speed = 0.00f;
    this->DesiredSpeed = 0.00f;
    this->SlopePitchDegreeAngle = 0.00f;
    this->SlopeRollDegreeAngle = 0.00f;
    this->SteeringAngle = 0.00f;
    this->DriveStartPlayRate = 0.00f;
    this->AimYawSmoothed = 0.00f;
    this->AimYawLastFrame = 0.00f;
    this->ReversingSpeedThreshold = -1.00f;
    this->BrakingDeltaThreshold = 16.00f;
    this->MovingThreshold = 0.10f;
    this->MovingForwardThreshold = 1.00f;
    this->MovingFastThreshold = 43.00f;
    this->SteeringLeftThreshold = -12.00f;
    this->SteeringRightThreshold = 12.00f;
    this->StartAimYawLerpingDeltaThreshold = 300.00f;
    this->StopAimYawLerpingDeltaThreshold = 10.00f;
    this->AimYawSmoothSpeed = 3.40f;
    this->PawnToVehicleDeltaYawAngleDegrees = 0.00f;
    this->AimCardDirDeadZoneAngleDegrees = 0.00f;
    this->AimCardDirAngleOffsetDegrees = 0.00f;
    this->AimFWDDeltaAngleDegrees = 0.00f;
    this->AimBWDDeltaAngleDegrees = 0.00f;
    this->AimLFTDeltaAngleDegrees = 0.00f;
    this->AimRGTDeltaAngleDegrees = 0.00f;
    this->LastCardDirIndex = -1;
    this->bIsFemale = false;
    this->bIsDriver = false;
    this->bIsFrontPassenger = false;
    this->bIsBackLeftPassenger = false;
    this->bIsBackRightPassenger = false;
    this->bIsBoosting = false;
    this->bIsReversing = false;
    this->bIsBraking = false;
    this->bIsMoving = false;
    this->bIsMovingForward = false;
    this->bIsMovingFast = false;
    this->bIsSteeringRight = false;
    this->bIsSteeringLeft = false;
    this->bIsSmoothingAimYaw = false;
    this->bAimFWD = false;
    this->bAimBWD = false;
    this->bAimLFT = false;
    this->bAimRGT = false;
}


