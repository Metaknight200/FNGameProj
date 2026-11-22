#include "FortAthenaVehicleInputState.h"

FFortAthenaVehicleInputState::FFortAthenaVehicleInputState() {
    // Initialize reflected value fields omitted by the dump.
    this->MovementDir = FVector::ZeroVector;
    this->ForwardAlpha = 0.00f;
    this->RightAlpha = 0.00f;
    this->PitchAlpha = 0.00f;
    this->LookUpDelta = 0.00f;
    this->TurnDelta = 0.00f;
    this->SteerAlpha = 0.00f;
    this->GravityOffset = 0.00f;
    this->bIsReversing = false;
    this->bIsSprinting = false;
    this->bIsJumping = false;
    this->bIsBraking = false;
    this->bIsHonking = false;
    this->bIgnoreForwardInAir = false;
    this->bMovementModifier0 = false;
    this->bMovementModifier1 = false;
    this->bMovementModifier2 = false;
}

