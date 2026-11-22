#include "FortAnimNode_SlopeWarping.h"

FFortAnimNode_SlopeWarping::FFortAnimNode_SlopeWarping() {
    // Initialize reflected value fields omitted by the dump.
    this->ActorLocation = FVector::ZeroVector;
    this->CustomFloorOffset = FVector::ZeroVector;
    this->GravityDir = FVector::ZeroVector;
    this->GravityDirCompSpace = FVector::ZeroVector;
    this->TargetFloorNormalWorldSpace = FVector::ZeroVector;
    this->TargetFloorOffsetLocalSpace = FVector::ZeroVector;
    this->CachedDeltaTime = 0.00f;
    this->MaxStepHeight = 0.00f;
    this->bKeepMeshInsideOfCapsule = false;
    this->bPullPelvisDown = false;
    this->bUseCustomFloorOffset = false;
    this->bWasOnGround = false;
    this->bShowDebug = false;
    this->bFloorSmoothingInitialized = false;
}

