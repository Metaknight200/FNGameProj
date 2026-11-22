#include "FortCameraMode_Dagwood.h"

UFortCameraMode_Dagwood::UFortCameraMode_Dagwood() {
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->HorizontalCameraSpaceOffsetWhileTurning = 0.00f;
    this->SteeringAngleForMaxHorizontalOffset = 0.00f;
    this->InAirVerticalOffset = 0.00f;
    this->AirOffsetDampFactor = 0.00f;
    this->SpeedAlphaDampFactor = 0.25f;
    this->TimeInAirRequiredForVertOffset = 0.10f;
    this->VehicleBasePitch = 0.00f;
    this->HorizOffsetInterpSpeed = 2.00f;
    this->HorizOffsetInterpSpeedRecovery = 3.00f;
    this->CurrentSpeedAlpha = 0.00f;
    this->CurrentVerticalOffset = 0.00f;
    this->CurrentHorizontalOffset = 0.00f;
    this->TimeInAir = 0.00f;
    this->PreviousSpeed = 0.00f;
    this->AppliedPitch = 0.00f;
}


