#include "FortVehicleLayerAnimInstance.h"

UFortVehicleLayerAnimInstance::UFortVehicleLayerAnimInstance() {
    this->Gender = EFortCustomGender::Invalid;
    this->LocalVelocityYawAngle = 0.00f;
    this->SlopePitchDegreeAngle = 0.00f;
    this->SlopeRollDegreeAngle = 0.00f;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->bHasBalloons = false;
    this->bIsDriver = false;
    this->bIsFrontPassenger = false;
    this->bIsBackLeftPassenger = false;
    this->bIsBackRightPassenger = false;
    this->bTransitionLocomotionAdditiveCrouchTurning = false;
    this->bRecentlyFired = false;
    this->Speed2D = 0.00f;
    this->bIsTargeting = false;
}


