#include "FortGameplayCueAttachInfo.h"

FFortGameplayCueAttachInfo::FFortGameplayCueAttachInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->OverrideLocation = FVector::ZeroVector;
    this->OverrideRotation = FRotator::ZeroRotator;
    this->OverrideScale = FVector::ZeroVector;
    this->AttachType = EFortGameplayCueAttachType::AttachToTarget;
    this->bAttachToWeapon = false;
    this->bAttachToHitResult = false;
    this->bUseUnsmoothedNetworkPosition = false;
    this->bIgnoreLocation = false;
    this->bIgnoreScale = false;
    this->bIgnoreRotation = false;
}

