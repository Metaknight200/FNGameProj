#include "FortLiveEventLayerAnimInstance.h"

UFortLiveEventLayerAnimInstance::UFortLiveEventLayerAnimInstance() {
    this->LiveEventLayerAnimBP = NULL;
    this->StopDirection = EFortCardinalDirection::North;
    this->WorldFlipAimOffsetAlpha = 0.00f;
    this->Speed = 0.00f;
    this->AccelerationMagnitude = 0.00f;
    this->VelocityYaw = 0.00f;
    this->VelocityYawLocal = 0.00f;
    this->VelocityYawLocalStop = 0.00f;
    this->VelocityYawLocalSmooth = 0.00f;
    this->AccelerationYaw = 0.00f;
    this->AccelerationYawLocal = 0.00f;
    this->ControlRotationPitchLocal = 0.00f;
    this->VelocityPitchDelta = 0.00f;
    this->VelocityYawDelta = 0.00f;
    this->ControlRotationPitchLocalDelta = 0.00f;
    this->WorldTiltRoll = 0.00f;
    this->WorldTiltPitch = 0.00f;
    this->WorldFlipPitch = 0.00f;
    this->WorldFlipRoll = 0.00f;
    this->WorldFlipAlpha = 0.00f;
    this->WorldTiltCameraRoll = 0.00f;
    this->WorldFlipCameraRoll = 0.00f;
    this->Breaststroke_Direction = 0.00f;
    this->Pitch_AO_Input = 0.00f;
    this->Breaststroke_AO_Yaw = 0.00f;
    this->Breaststroke_AO_Pitch = 0.00f;
    this->bIsWorldTilting = false;
    this->bIsWorldFlipping = false;
    this->bUseIdleNoiseTucked = false;
    this->bHasWorldFullyFlipped = false;
    this->bEnterWorldFlipGliding = false;
    this->bWorldFlipBeginDive = false;
    this->bWorldFlipReturnToGlide = false;
    this->bIsFloating = false;
    this->bIsOnGround = false;
    this->bUWIdleFullyBlended = true;
    this->bIsChangingDirection = false;
    this->bIsStopping = false;
    this->bWantsToUpdateStop = true;
    this->bWantsToUpdateStopDirection = true;
    this->bHoldBSDirection = false;
    this->bTransition_UWIdle_To_UWSwimStart = false;
    this->bTransition_UWSprintStop_To_UWSwimStart = false;
    this->bTransition_UWSwimStart_To_SprintStop = false;
    this->bTransition_UWSwimStart_To_Idle = false;
    this->bTransition_UWSprintLoop_To_SprintStop = false;
}



