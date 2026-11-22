#include "FortSpicySakeVehicleAnimInstance.h"

UFortSpicySakeVehicleAnimInstance::UFortSpicySakeVehicleAnimInstance() {
    this->LocalVelocityYawAngle = 0.00f;
    this->ForwardSpeed = 0.00f;
    this->UpSpeed = 0.00f;
    this->SmoothJumpPitch = 0.00f;
    this->SmoothJumpPitchDeltaRate = 0.00f;
    this->CurrentBoostRateScale = 0.00f;
    this->bIsJumping = false;
    this->bIsSurfaceSwimming = false;
    this->bIsOnGround = false;
    this->bIsFalling = false;
    this->bIsCharging = false;
    this->bOnGroundNotMoving = false;
    this->bLanded = false;
    this->bIsBoosting = false;
    this->bStartBoosting = false;
    this->bTransition_Idle_To_Boost = false;
    this->bTransition_Boost_To_Idle = false;
}


