#include "FortHoagieDriverAnimInstance.h"

UFortHoagieDriverAnimInstance::UFortHoagieDriverAnimInstance() {
    this->BoostCardinalDirection = EFortCardinalDirection::North;
    this->NormalizedAcceleration = 0.00f;
    this->VehicleRoll = 0.00f;
    this->VehicleYaw = 0.00f;
    this->ForwardSpeed = 0.00f;
    this->bIsMovingAnyDirection = false;
    this->bIsMovingFastAnyDirection = false;
    this->bShouldReverse = false;
    this->bShouldGoBackToIdle = false;
    this->bTransition_Default_ReverseStart = false;
    this->bTransition_BoostLoop_Reverse = false;
}


