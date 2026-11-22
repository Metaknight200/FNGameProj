#include "FortSwimmingLayerAnimInstance.h"

UFortSwimmingLayerAnimInstance::UFortSwimmingLayerAnimInstance() {
    this->SavedWeaponAbilityLastFireTime = 0.00f;
    this->SwimmingYawDeltaRatePerSecond = 0.00f;
    this->SwimmingSpeedRelativeToFlow = 0.00f;
    this->SwimmingYawDeltaRatePerSecondSmooth = 0.00f;
    this->SwimmingYawDeltaRatePerSecondSmoothClamped = 0.00f;
    this->SwimmingSprintYawDeltaRatePerSecondSmooth = 0.00f;
    this->SwimmingDivePitch = 0.00f;
    this->SwimmingDivePitchDeltaRatePerSec = 0.00f;
    this->SwimmingVelocityAngle = 0.00f;
    this->SwimmingLocalAccelerationYawAngleSmooth = 0.00f;
    this->SwimmingNonZeroLocalAccelYawAngle = 0.00f;
    this->SwimmingWaterSurfacePitch = 0.00f;
    this->SwimmingWaterSurfacePitchDelta = 0.00f;
    this->SwimmingWaterSurfacePitchDeltaRatePerSecond = 0.00f;
    this->SwimmingWaterSurfacePitchDeltaRatePerSecondSmooth = 0.00f;
    this->SwimmingResetStoppedDivingWhileUnderWaterTime = 0.00f;
    this->SwimmingNonTargetingBlendspaceDir = 0.00f;
    this->AbsYawDeltaSmoothed = 0.00f;
    this->LocalAccelYawAngle = 0.00f;
    this->DefaultSwimmingLayerAlpha = 0.00f;
    this->MovementAdditiveAndSprintSwimmingLayerAlpha = 0.00f;
    this->IdlePelvisOffsetAlpha = 0.00f;
    this->MeleeTwistCurveValue = 0.00f;
    this->DBNOTurnPlayRateAbs = 0.00f;
    this->Gender = EFortCustomGender::Invalid;
    this->bIsFemale = false;
    this->bIsDBNO = false;
    this->bIsWaterJump = false;
    this->bRecentlyFired = false;
    this->bIsSprinting = false;
    this->bIsAccelerating2D = false;
    this->bIsMoving2D = false;
    this->bIsOnGround = false;
    this->bIsCrouching = false;
    this->bIsTargeting = false;
    this->bIsSurfaceSwimming = false;
    this->bIsDiveJumping = false;
    this->bSwimmingAllowSlowSprint = false;
    this->bSwimmingIsWaterLanding = false;
    this->bSwimmingSharpAccelerationChange = false;
    this->bStoppedDivingWhileUnderWater = false;
    this->bSwimmingPlayDBNOTurnEast = false;
    this->bSwimmingSprintSlowEnoughTimePassed = true;
    this->bSwimmingIsJumpOrLanding = false;
    this->bEnteredWaterDiving = false;
    this->bSwimmingIsSurfaceSwimmingOrPaddlingToSurface = false;
    this->bTransition_Swimming_FullBody_Sprinting = false;
    this->bTransition_FullBody_SwimSprinting = false;
    this->bTransition_Swimming_LowerBody_Movement = false;
    this->bTransition_SwimSprintSlow_to_SwimSprintStart = false;
    this->bTransition_SwimSprintSlow_to_SwimSprint = false;
    this->bTransition_SwimSprint_to_SwimSprintSlow = false;
    this->bTransition_Idles_to_SwimStart = false;
    this->bTransition_SwimStart_to_SwimMovementAccel = false;
    this->bTransition_SwimStartAdditive_to_SwimMovementAccelAdditive = false;
    this->bTransition_SwimDiveLandOnGround_to_SplitBody = false;
    this->bTransition_Sprinting_to_Conduit = false;
    this->bTransition_InterruptSprintSwimming = false;
    this->bTransition_DBNOSwimIdle_to_DBNOSwimTurn = false;
    this->bTransition_IdleAdditive_to_SwimStartAdditive = false;
    this->bTransition_LowerBody_Movement = false;
}


