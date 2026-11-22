#include "FortItemLayerAnimInstance.h"

UFortItemLayerAnimInstance::UFortItemLayerAnimInstance() {
    this->Speed2D = 0.00f;
    this->FallPlayRate = 0.00f;
    this->DBNOTurnPlayRate = 0.00f;
    this->ADSToNonADSBlendTime = 0.00f;
    this->NonADSToADSBlendTime = 0.00f;
    this->SlopeSlidingPitch = 0.00f;
    this->SlopeSlidingRoll = 0.00f;
    this->Gender = EFortCustomGender::Invalid;
    this->bIsMoving2D = false;
    this->bIsAboveMinimumLocomotionSpeed = false;
    this->bIsTargeting = false;
    this->bIsRelaxedLevel1 = false;
    this->bIsRelaxedLevel2 = false;
    this->bIsCrouching = false;
    this->bIsJumpBoosting = false;
    this->bSwimmingJumpInitiatedFromWater = false;
    this->bIsRelaxedLevel1AndNotJumpBoosting = false;
    this->bIsRelaxedLevel1AndNotJumpingFromWater = false;
    this->bIsInVehicle = false;
    this->bIsDBNO = false;
    this->bIsPlayingMeleeAnim = false;
}


