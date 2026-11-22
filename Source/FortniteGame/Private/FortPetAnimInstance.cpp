#include "FortPetAnimInstance.h"

UFortPetAnimInstance::UFortPetAnimInstance() {
    this->LookAtAlpha = 0.00f;
    this->LookAtTargetingSpeed = 12.00f;
    this->LookAtOverride = 0.00f;
    this->JumpAnimIndex = 0;
    this->SkydiveRollWhenFloating = 0.00f;
    this->SkydiveRollWhenDiving = 0.00f;
    this->SkydiveRollInterpSpeed = 0.00f;
    this->DownSightsToLocomotionTimeRemaining = 0.33f;
    this->FaceCurveOverrideValue = 0.00f;
    this->bIsFlyingPet = false;
    this->HandIKAlpha = 0.00f;
    this->LegIKAlpha = 0.00f;
    this->bIsSlopeSliding = false;
    this->bIsJumpLandComplete = false;
    this->bIsZiplining = false;
    this->bIsBallooning = false;
    this->bIsFlying = false;
    this->bIsSurfaceSwimming = false;
    this->bIsInAirNotJumping = false;
    this->bUseSkydiveRotation = false;
    this->bIsSkydivingInGame = false;
    this->bIsPlayingMeleeAnim = false;
    this->bIsTargeting = false;
    this->bIsDBNO = false;
    this->bIsHappy = false;
    this->bIsHunker = false;
    this->bIsInFrontEnd = false;
    this->bIsFrontEndLobbyPartyMember = false;
    this->bIsOwnerPawnBeingControlledByNonPlayerAnimBP = false;
    this->bIsCrouching = false;
    this->bIsMoving2D = false;
    this->bIsLocomotion = false;
    this->bIsJogging = false;
    this->bIsSprinting = false;
    this->bIsCrouchSprinting = false;
    this->bIsCrouchMoving = false;
    this->bIsTargetingAndMoving = false;
    this->bTransition_LocomotionToIdle_To_Locomotion = false;
    this->bTransition_Locomotion_To_LocomotionToIdle = false;
    this->bTransition_JumpFall_To_Skydive = false;
    this->bTransition_JumpLand_To_Locomotion = false;
    this->bTransition_DownSightsToIdle_To_Locomotion = false;
    this->bTransition_Idle_IdleLobby = false;
    this->bTransition_Idle_Locomotion = false;
    this->bTransition_InnerIdle_IdleToHappy = false;
    this->bTransition_Locomotion_StartJump = false;
    this->bTransition_Locomotion_LocomotionHappy = false;
    this->bTransition_Crouch_CrouchToLocomotion = false;
    this->bTransition_Crouching_CrouchToIdle = false;
    this->bTransition_Crouching_CrouchToCrouchADSNotMoving = false;
    this->bTransition_CrouchToCrouchADSNotMoving_Crouching = false;
    this->bTransition_Skydive_Idle = false;
    this->bTransition_SkyDiveGliding_SkyDiveDiving = false;
    this->bTransition_Hunker_Idle = false;
    this->bTransition_Hunker_Locomotion = false;
    this->bTransition_Hunker_HunkerToCrouch = false;
    this->bTransition_DownSights_ADSToCrouch = false;
    this->bTransition_DownSights_DownSightsToIdle = false;
    this->bTransition_CrouchWalkingDownSights_DownSights = false;
    this->bTransition_IdleLobby_Idle = false;
    this->bTransition_FrontEndSkydive_LobbyHunker = false;
    this->bTransition_FrontEndSkydive_IdleLobby = false;
    this->bTransition_LobbyHunker_HunkerToLobby = false;
    this->bTransition_Happy_HappyToIdle = false;
    this->bTransition_Happy_HappyToCrouchInternal = false;
    this->bTransition_ParachuteToSkydiveGlide_Skydive = false;
    this->bEmotePlaying_WhereHunkeringIsBest = false;
    this->bEmotePlaying_WhereHappyIsBest = false;
    this->bResponse_ShouldBeHappy = false;
    this->LastObservedFrontEndEmote = NULL;
}


FGameplayTag UFortPetAnimInstance::TEMP_GetActiveTag() {
    return FGameplayTag{};
}

void UFortPetAnimInstance::ApplyOrRemoveFlagsFromEmote(const UFortMontageItemDefinitionBase* Emote, bool bApply) {
}


