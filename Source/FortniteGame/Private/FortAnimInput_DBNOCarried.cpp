#include "FortAnimInput_DBNOCarried.h"

FFortAnimInput_DBNOCarried::FFortAnimInput_DBNOCarried() {
    // Initialize reflected value fields omitted by the dump.
    this->LHandIKLocation = FVector::ZeroVector;
    this->LHandIKRotation = FRotator::ZeroRotator;
    this->TempAttachLocation = FVector::ZeroVector;
    this->TempAttachRotation = FRotator::ZeroRotator;
    this->CarrierDropMontage = NULL;
    this->CarrierPickupMontage = NULL;
    this->CarrierPawn = NULL;
    this->CarrierAnimBP = NULL;
    this->CarrierInterrogationMontage = NULL;
    this->SubAnimPhysicsWeight = 0.00f;
    this->DropMontagePosition = 0.00f;
    this->PickupMontagePosition = 0.00f;
    this->InterrogationMontagePosition = 0.00f;
    this->PickupToIdleTransitionPosition = 0.00f;
    this->CarrierPawnVelocityZ = 0.00f;
    this->CarrierYawDeltaSmoothed = 0.00f;
    this->CarriedJogNAnimPosition = 0.00f;
    this->CarriedJogSAnimPosition = 0.00f;
    this->CarriedCrouchNAnimPosition = 0.00f;
    this->CarriedCrouchSAnimPosition = 0.00f;
    this->CarriedSprintAnimPosition = 0.00f;
    this->CarriedCrouchSprintAnimPosition = 0.00f;
    this->CarrierSpinePitch = 0.00f;
    this->DropStateWeight = 0.00f;
    this->bBeingCarried = false;
    this->bIsBeingPickedUp = false;
    this->bIsBeingDropped = false;
    this->bCarrierIsCrouching = false;
    this->bCarrierIsMovingBackward = false;
    this->bCarrierHasSyncMarkers = false;
    this->bTransitionFromPickupToIdle = false;
    this->bTransitionFromIdleToJogging = false;
    this->bTransitionFromJoggingToSprinting = false;
    this->bTransitionFromInAirToLanding = false;
    this->bJackalPlayJumpTrickVertical = false;
}

