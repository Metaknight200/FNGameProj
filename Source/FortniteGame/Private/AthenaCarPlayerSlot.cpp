#include "AthenaCarPlayerSlot.h"

FAthenaCarPlayerSlot::FAthenaCarPlayerSlot() {
    // Initialize reflected value fields omitted by the dump.
    this->ActorSpaceCameraOffset = FVector::ZeroVector;
    this->CrouchingFiringOffset = FVector::ZeroVector;
    this->EmoteOffset = FVector::ZeroVector;
    this->StandingFiringOffset = FVector::ZeroVector;
    this->VehicleSpaceCameraOffset = FVector::ZeroVector;
    this->SoundOnEnter = NULL;
    this->SoundOnExit = NULL;
    this->AnimInstanceOverride = NULL;
    this->AnimLayerOverride = NULL;
    this->bUsePerSeatAnimInstanceOverride = false;
    this->bIsSelectable = false;
    this->bUseGroundMotion = false;
    this->bUseVehicleIsOnGround = false;
    this->bCanEmote = false;
    this->bCanCarryDBNOPlayer = false;
    this->bForceCrouch = false;
    this->bPlayEnterSoundForTransition = false;
    this->bPlayExitSoundForTransition = false;
    this->bIsPushDriver = false;
    this->bCanOnlyFireWhenTargeting = false;
    this->SlopeCompensationCameraOffset = 0.00f;
    this->Player = NULL;
    this->PlayerEntryTime = 0.00f;
    this->EnterSeatTime = 0.00f;
    this->bConstrainPawnToSeatTransform = false;
    this->bConstrainPawnToSeatDuringTransitionMontage = false;
    this->bOffsetPlayerRelativeAttachLocation = false;
    this->bUseExitTimer = false;
    this->WeaponComponent = NULL;
    this->bIsMountedWeaponOnlySeat = false;
    this->CameraPitchConstraint = 0.00f;
    this->CameraYawConstraint = 0.00f;
    this->bReserved = false;
    this->EnvironmentExposure = ESlotEnvironmentExposure::Unknown;
}

