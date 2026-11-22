#include "FortAnimNotifyState_SpawnProp.h"

UFortAnimNotifyState_SpawnProp::UFortAnimNotifyState_SpawnProp() {
    this->Scale = FVector::OneVector;
    this->ActorProp = NULL;
    this->SkeletalMeshProp = NULL;
    this->SkeletalMeshPropAnimation = NULL;
    this->SkeletalMeshPropAnimClass = NULL;
    this->bInheritScale = true;
    this->bAbsoluteScale = false;
    this->bUseAttachParentBound = false;
    this->bPropAnimLooping = true;
    this->bSyncMontage = false;
    this->bPrestreamTextures = true;
    this->PrestreamTextureDuration = 5.00f;
    this->StaticMeshProp = NULL;
    this->PropId = 0;
    this->bApplyVariantsToSpawnedItems = false;
    this->bTrackComponentPropInGC = true;
}


