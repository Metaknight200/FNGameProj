#include "FortAnimInstance.h"

UFortAnimInstance::UFortAnimInstance() {
    this->bUpdateAllPawnProperties = true;
    this->VelocityLerpAlpha = 1.00f;
    this->MinSpeed2DThreshold = 25.00f;
    this->PawnSpeed2D = 0.00f;
    this->PawnVelocityZ = 0.00f;
    this->PawnMovementDirectionAzimuth = 0.00f;
    this->PawnMovementDirectionElevation = 0.00f;
    this->bIsJumping = false;
    this->bIsFalling = false;
    this->bShouldPredictLanding = false;
    this->bLandingPredicted = false;
    this->PredictedFallTimeLeft = 0.00f;
    this->FallLookAheadSubStepping = 0.00f;
    this->FallLookAheadMaxIterations = 0;
    this->bDebugLandPrediction = false;
    this->bRecordJumpPositions = false;
    this->bIsRecordingJump = false;
    this->RecordJumpFrameCount = 0;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->TimeForRecentlyFired = 0.20f;
    this->TimeToReachRelaxedLevel1 = 5.00f;
    this->TimeToReachRelaxedLevel2 = 15.00f;
    this->MinTimeAfterFiredBeforeWallRelaxed = 0.60f;
    this->bRecentlyFired = false;
    this->bIsRelaxedLevel1 = false;
    this->bIsRelaxedLevel2 = false;
    this->bIsWeaponLoweredNearWall = false;
    this->bExitedRelaxedThisUpdate = false;
    this->bLowerWeaponNearWallDuringTargeting = true;
    this->RelaxedLevelTimeCounter = 0.00f;
    this->SavedWeaponLastFireTime = 0.00f;
    this->RequestedRelaxedState = EAnimRelaxedState::None;
    this->bClothEnabled = false;
    this->bAnimDynamicsEnabled = false;
    this->bRigidBodyEnabled = false;
    this->bEnableAdditiveLayer = false;
    this->bIsInGoop = false;
}

AFortAIPawn* UFortAnimInstance::TryGetFortAIPawn() {
    return NULL;
}

void UFortAnimInstance::StopMontageIncludingInactive(float InBlendOutTime, const UAnimMontage* Montage) {
}

void UFortAnimInstance::GetPreviousFrameAimPitchAndYaw(float& OutPitch, float& OutYaw) const {
}

EFortCardinalDirection UFortAnimInstance::GetCardinalDirectionFromAngle(float Angle, float DeadZoneAngle) const {
    return EFortCardinalDirection::North;
}

void UFortAnimInstance::AnimNotify_RightFootStep(const UAnimNotify* Notify) {
}

void UFortAnimInstance::AnimNotify_LeftFootStep(const UAnimNotify* Notify) {
}


