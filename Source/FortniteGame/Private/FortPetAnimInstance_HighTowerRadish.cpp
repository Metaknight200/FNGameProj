#include "FortPetAnimInstance_HighTowerRadish.h"

UFortPetAnimInstance_HighTowerRadish::UFortPetAnimInstance_HighTowerRadish() {
    this->OwnerAnimBP = NULL;
    this->OwnerLocomotionDirection = 0.00f;
    this->OwnerLocomotionSpeed = 0.00f;
    this->StoppedMovingOrMeleeForLongEnoughTime = false;
    this->bPetUnderwater = false;
    this->HighTowerRadish_LobbySkyDive_Diving = false;
    this->HighTowerRadish_LobbySkyDive_Gliding = false;
    this->FrontEndIdleTransition = false;
    this->AdditiveTransitionCurve = 0.00f;
    this->LeftHandIKCurve = 0.00f;
    this->TurnOffLeans = 0.00f;
    this->OffsetRootYawFractioned = 0.00f;
    this->OffsetRootYawSmooth = 0.00f;
    this->bIsPlayingEmoteExtra = false;
    this->bIsInVehicle = false;
    this->InVehicle = 0.00f;
    this->bIsSkydivingFE = false;
    this->bSlowDownInterp = false;
    this->bPetUnderWaterAndNotTargeting = false;
    this->bIsOwnerPlayingMeleeAnim = false;
    this->bIsSkydivingInGameOrIsParachuteOpen = false;
    this->BodyOffsetSpringMass = 0.75f;
}



bool UFortPetAnimInstance_HighTowerRadish::IsTurningSharply() const {
    return false;
}


