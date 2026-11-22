#include "FortSpicySakeOccupantAnimInstanceLayer.h"

UFortSpicySakeOccupantAnimInstanceLayer::UFortSpicySakeOccupantAnimInstanceLayer() {
    this->GroundIdleThreshold = 900.00f;
    this->GroundIdleLowThreshold = 500.00f;
    this->LocalVelocityYawAngleTurnResetThreshold = 10.00f;
    this->LocalVelocityYawAngleTurnTransitionThreshold = 18.00f;
    this->LocalVelocityYawAngle = 0.00f;
    this->PawnSpeed2D = 0.00f;
    this->PawnVelocityZ = 0.00f;
    this->bIsFemale = false;
    this->bIsOnGround = false;
    this->bIsOnWater = false;
    this->bLandingPredicted = false;
    this->bTransition_NewFallAditive_NewFallLandAdditive = false;
    this->bTransitionNewJumpLoopAdditiveToNewFallAdditive = false;
    this->bShouldApplyIdleAdditive = false;
    this->bIsTargeting = false;
    this->bIsPlayerCloseToShark = false;
    this->bIsBoosting = false;
    this->bCanTurnLeft = true;
    this->bCanTurnRight = true;
    this->bTransition_RideLoop_TurnLeft = false;
    this->bTransition_RideLoop_TurnRight = false;
    this->bIsReloading = false;
    this->bIsPlayingMeleeAnim = false;
    this->bIsPlayingEmote = false;
    this->bShouldPlayOnGroundIdle = false;
    this->bShouldPlayOnGroundIdleLow = false;
    this->bIsJumping = false;
    this->bCanUseTargettingStateMachine = false;
    this->bTransition_SharRideLoop_To_JumpUp = false;
}


