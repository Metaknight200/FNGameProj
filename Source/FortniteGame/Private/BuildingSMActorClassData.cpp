#include "BuildingSMActorClassData.h"

FBuildingSMActorClassData::FBuildingSMActorClassData() {
    // Initialize reflected value fields omitted by the dump.
    this->RandomScaleRange = FVector2D::ZeroVector;
    this->ShieldBuffMaterialParamValue1 = 0.00f;
    this->ShieldBuffMaterialParamValue2 = 0.00f;
    this->AnimatingDistanceFieldSelfShadowBias = 0.00f;
    this->AnimatingSubObjects = 0.00f;
    this->PlayerGridSnapSize = 0.00f;
    this->NumFrameSubObjects = 0;
    this->bForceReplicateSubObjects = false;
    this->bNoPhysicsCollision = false;
    this->bNoCameraCollision = false;
    this->bNoPawnCollision = false;
    this->bNoAIPawnCollision = false;
    this->bBlocksCeilingPlacement = false;
    this->bBlocksAttachmentPlacement = false;
    this->bUsePhysicalSurfaceForFootstep = false;
    this->bRandomYawOnPlacement = false;
    this->bRandomScaleOnPlacement = false;
    this->bClearMIDWhenReturningToUndamagedState = false;
}

