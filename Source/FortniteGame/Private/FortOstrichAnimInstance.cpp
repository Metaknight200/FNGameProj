#include "FortOstrichAnimInstance.h"

UFortOstrichAnimInstance::UFortOstrichAnimInstance() {
    this->MechMeshSpecialMontage = NULL;
    this->bDoingSpecialEmote = false;
    this->bIsCosmeticPreview = false;
    this->bIsMoving2D = false;
    this->bWasMoving2DLastFrame = false;
    this->bIsShotgunFired = false;
    this->bIsMechBeginFired = false;
    this->bIsFallingWithDriver = false;
    this->bIsSkyTubingWithDriver = false;
    this->bIsInAirWithDriver = false;
    this->bStartTransitionTriggeredAndEnableStarts = false;
    this->MechWalkPlayRateValue = 1.00f;
    this->MechWalkSpeedWarpingValue = 0.00f;
    this->RocketCurveValueFloat = 0.00f;
    this->ShotgunAmmo_SlideValue = 0.00f;
    this->Ostrich = NULL;
    this->EmoteMeshToCopy = NULL;
    this->YawDeltaCurrentTick = 0.00f;
    this->SlopeWarpingAlpha = 0.00f;
    this->SlopeWarpingAlphaInterpSpeed = 16.00f;
    this->Speed2D = 0.00f;
    this->LocalAimYaw = 0.00f;
    this->GunnerAimTargetDeltaYaw = 0.00f;
    this->GunnerAimTargetDeltaPitch = 0.00f;
    this->LocalAimCardinalDirection = EFortCardinalDirection::North;
    this->LocalAimYawDeadZoneAngle = 0.00f;
    this->LocalVelocityYawAngle = 0.00f;
    this->LocalVelocityYawAngleInterpolated = 0.00f;
    this->LocalAccelerationYawAngle = 0.00f;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->LocomotionDeadZoneAngle = 6.00f;
    this->bIsDashing = false;
    this->bIsDashAnimDurationElapsed = false;
    this->bIsChargingJump = false;
    this->bHasDriver = false;
    this->bHasGunner = false;
    this->bIsEmoting = false;
    this->bIsOnGround = false;
    this->bIsRocketOnCoolDown = false;
    this->bShouldApplyShoulderPadsAdditive = false;
    this->bInAir = false;
    this->bShouldRightArmLookAt = false;
    this->bPassengerBootUp = false;
    this->bIsEmptyOnFirstLoad = true;
    this->bJustDidStompInAir = false;
    this->bIsStompInAir = false;
    this->bWasStompInAir = false;
    this->bShouldPlayJumpCharging = false;
    this->bHadDriver = false;
    this->bJustGotDriver = false;
    this->bJustLostDriver = false;
    this->bWasDashing = false;
    this->bStartedDash = false;
    this->bHadGunner = false;
    this->bJustGotGunner = false;
    this->bJustLostGunner = false;
    this->bShouldPlayJogStop = false;
    this->bShouldBringAmmoBack = false;
    this->bHasAnyPlayer = false;
    this->bIsOnCoolDown = false;
    this->bShouldPlayNormalJump = false;
    this->bShouldPlayChargedJump = false;
    this->bIsSkyTubing = false;
    this->bShouldPlaySkyTubingLoop = false;
    this->bStartTransitionTriggered = false;
    this->bStartEarlyOut = false;
    this->bPivotTransitionTriggered = false;
    this->bPivotEarlyOut = false;
    this->bShouldEarlyOutStompLanding = false;
    this->JumpApexLoopAlphaValue = 0.00f;
    this->StatusStartPositionAlphaValue = 0.00f;
    this->InMotionAlphaValue = 0.00f;
    this->DashLeansAlphaValue = 0.00f;
    this->ShotgunShellsAlphaValue = 0.00f;
    this->GunnerJogBounceAlphaValue = 0.00f;
    this->GunnerAimYawBlendIn = 1.00f;
    this->GunnerAimYawBlendOut = 4.00f;
    this->RightArmNoAdditiveAlphaValue = 0.00f;
    this->BaseAdditiveAlphaValue = 0.00f;
    this->GunnerAlphaValue = 0.00f;
    this->JoyStickAlphaValue = 0.00f;
    this->ShellOneAlphaValue = 0.00f;
    this->ShellTwoAlphaValue = 0.00f;
    this->ShellThreeAlphaValue = 0.00f;
    this->ShellFourAlphaValue = 0.00f;
    this->ShellsPlayRateValue = 0.00f;
    this->RecoilAmountAlphaValue = 0.00f;
    this->LowerBodyRecoilAdditiveAlphaValue = 0.00f;
    this->ChargeJumpFloatValue = 0.00f;
    this->InMotionAlphaInterpSpeed = 5.00f;
    this->DashLeansAlphaInterpSpeed = 5.00f;
    this->GunnerJogBounceAlphaInterpSpeed = 5.00f;
    this->RightArmNoAdditiveInterpSpeed = 5.00f;
    this->JoyStickAlphaInterpSpeed = 1.00f;
    this->GunnerAlphaInterpSpeed = 1.00f;
    this->StatusStartPositionAlphaWhemIsEmptyOnFirstLoad = 1.33f;
    this->DashLeansAlphaWhenGunner = 0.25f;
    this->DashLeansAlphaNoGunner = 1.00f;
    this->ShotgunShellsAlphaWhenShotgunFires = 1.00f;
    this->ShotgunShellsAlphaNoShotgunFiring = 0.00f;
    this->BaseAdditiveAlphaWhenMontageIsPlaying = 1.00f;
    this->BaseAdditiveAlphaNoMontagePlaying = 0.00f;
    this->JoyStickAlphaWithGunner = 0.00f;
    this->GunnerAlphaWithGunner = 1.00f;
    this->ShellOneAlphaAmmoCountAt3 = 1.00f;
    this->ShellTwoAlphaAmmoCountAt2 = 1.00f;
    this->ShellThreeAlphaAmmoCountAt1 = 1.00f;
    this->ShellFourAlphaAmmoCountAt0 = 1.00f;
    this->ShellsPlayRateWhenNoMoreAmmoAndShouldBringAmmo = 1.00f;
    this->RecoilAmountAlphaWhenMontagePlayingAndShotgunFires = 0.50f;
    this->LowerBodyRecoilAdditiveAlphaWithDriver = 0.15f;
    this->LowerBodyRecoilAdditiveAlphaNoDriver = 0.20f;
    this->JumpApexLoopAlphaNotChargingJump = 1.00f;
    this->JumpApexLoopAlphaWhenIsChargingJump = 0.00f;
    this->PlayRateSpeedWarpAlpha = 0.50f;
    this->RigidBodyAlpha = 0.00f;
    this->MechShotgunReload = NULL;
    this->MechShotgunFireA = NULL;
    this->MechShotgunFireB = NULL;
    this->MechRocketFire = NULL;
    this->MechRocketFireSettle = NULL;
    this->ChargedJumpApexSeq = NULL;
    this->ChargedJumpFallSeq = NULL;
    this->ChargedJumpLandSeq = NULL;
    this->ChargedJumpLandPredictedSeq = NULL;
    this->NormalJumpApexSeq = NULL;
    this->NormalJumpFallSeq = NULL;
    this->NormalJumpLandSeq = NULL;
    this->NormalJumpLandPredictedSeq = NULL;
    this->JumpBaseApexSeq = NULL;
    this->JumpBaseFallSeq = NULL;
    this->JumpBaseLandSeq = NULL;
    this->JumpBaseLandPredictedSeq = NULL;
    this->bTransition_Idle_To_Movement = false;
    this->bTransition_BootUp_To_Movement = false;
    this->bTransition_Turn_To_Idle = false;
    this->bTransition_Stop_To_Idle = false;
    this->bTransition_DashLoop_To_Default = false;
    this->bTransition_DashLoop_To_DashOutro = false;
    this->NotJustGotDriverFloat = 0.00f;
    this->IsShotgunFiredFloat = 0.00f;
    this->UpperBodyLagMaxRecoverySpeed = 0.00f;
    this->UpperBodyLagRecoverySmoothness = 0.00f;
    this->UpperBodyLagRecoveryMass = 0.00f;
    this->UpperBodyLagRecoveryDelay = 0.00f;
    this->UpperBodyLagOffsetLimitDuringTurns = 0.00f;
    this->UpperBodyLagOffsetLimitDuringTurnsInterpSpeed = 0.00f;
    this->UpperBodyLagOffsetLimitWhileStill = 0.00f;
    this->UpperBodyLagOffsetLimitWhileStillInterpSpeed = 0.00f;
    this->CurrentUpperBodyLagRecoverySpeed = 0.00f;
    this->TimeUntilNextUpperBodyLagRecovery = 0.00f;
    this->CurrentUpperBodyLagOffsetLimit = 0.00f;
    this->PivotAnimationLeft = NULL;
    this->PivotAnimationRight = NULL;
    this->PivotEarlyOutAngleThreshold = 0.00f;
    this->PivotAnimation = NULL;
    this->PivotAnimPosition = 0.00f;
    this->bEnableStarts = true;
    this->StartEarlyOutThresold = 0.00f;
    this->StartAnimDistanceFromMarker = 0.00f;
    this->ActualDistanceFromMarker = 0.00f;
    this->StartAnimTimeElapsed = 0.00f;
    this->StartInitialAccelYaw = 0.00f;
    this->StartTurnDirection = 0.00f;
    this->StartCardinalDirection = EFortCardinalDirection::North;
    this->StartAnimation = NULL;
    this->StartAnimPosition = 0.00f;
}












void UFortOstrichAnimInstance::OnEmoteMontageStarted(UAnimMontage* EmoteMontage) {
}

void UFortOstrichAnimInstance::OnEmoteMontageBlendingOut(UAnimMontage* EmoteMontage, bool bInterrupted) {
}

void UFortOstrichAnimInstance::AnimNotify_MechBeginFire(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_JumpEnter(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_EmptyPoseState(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_AnimNotify_Mech_OnCoolDown(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_AnimNotify_AmmoHide(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_AnimNotify_AmmoCheck(const UAnimNotify* Notify) {
}


