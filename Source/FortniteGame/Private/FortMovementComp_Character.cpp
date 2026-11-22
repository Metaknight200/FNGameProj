#include "FortMovementComp_Character.h"

UFortMovementComp_Character::UFortMovementComp_Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bProjectNavMeshWalking = true;
    this->LandHardSoundFallSpeedThreshold = 1400.00f;
    this->LandSoundFallSpeedThreshold = 600.00f;
    this->PushBumpedPawnClass = NULL;
    this->NetworkSmoothingVisibilityThreshold = 0.25f;
    this->NetworkSmoothingThrottleProxyUpdateForPawnLOD = 0;
    this->NetworkSmoothingViewAngleThreshold = 45.00f;
    this->NetworkSmoothingViewAngleThresholdSmall = 12.00f;
    this->NetworkSmoothingNoThrottleWithinDistanceInMeters = 10.00f;
    this->PlayerLodRequiredForFloorCheckWhenRendered = 0;
    this->AILodRequiredForFloorCheckWhenRendered = EFortAILODLevel::AboveNormal;
    this->VelocityBasedStrafeCurve = NULL;
    this->VelocityBasedTurnCurve = NULL;
    this->VelocityBasedBackupCurve = NULL;
    this->bWasUsingVelocityBasedTurnCurve = false;
    this->RotationYawRateToRestore = 0.00f;
    this->FallingSlopeSafeSlideAngleCached = 0.00f;
    this->FallingSlopeSafeSlideNormalZ = 0.00f;
    this->bComputeWaterSplineDataOnSimulatedMovement = false;
    this->SkydivingMaxSmoothUpdateDistanceScale = 3.00f;
    this->SlideTimeUntilReset = 0.10f;
    this->SlideIfVelocityLessThanZ = -400.00f;
    this->GravityCeilingRelation = -1;
    this->CurrentZiplineVelocityDirection = 0.00f;
    this->GracePeriodToConnectToZipline = 0.00f;
    this->FallingStartedZ = -339999995214436424907732413799364296704.00f;
    this->bTriggeredFallingFeedbackSinceLanded = false;
    this->bUpdatesFloorWhenNotInFullSimulation = false;
    this->bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate = false;
    this->CustomMeshHeightAdjust = 0.00f;
    this->CustomMeshHeightAdjustLerpTarget = 0.00f;
    this->CustomMeshHeightAdjustLerpSpeed = 0.00f;
    this->CustomMeshHeightAdjustTotalApplied = 0.00f;
}

bool UFortMovementComp_Character::IsPassivelySkydiving() const {
    return false;
}

bool UFortMovementComp_Character::IsPassivelyParachuting() const {
    return false;
}

bool UFortMovementComp_Character::IsActivelyStrafingInAir(const bool bCheckMovementMode) const {
    return false;
}

bool UFortMovementComp_Character::IsActivelySkydivingUpInVortex() const {
    return false;
}

bool UFortMovementComp_Character::IsActivelySkydiving(const bool bCheckMovementMode) const {
    return false;
}

bool UFortMovementComp_Character::IsActivelyParachuting() const {
    return false;
}

FVector UFortMovementComp_Character::GetWaterVelocity() const {
    return FVector{};
}

FVector UFortMovementComp_Character::GetWaterSurfaceNormal() const {
    return FVector{};
}

FVector UFortMovementComp_Character::GetWaterSurfaceLocation() const {
    return FVector{};
}

float UFortMovementComp_Character::GetWaterImmersionDepth() const {
    return 0.0f;
}

FVector UFortMovementComp_Character::GetPlayerRelativeVelocityToWater() const {
    return FVector{};
}

float UFortMovementComp_Character::GetFallingStartedZ() const {
    return FallingStartedZ;
}


