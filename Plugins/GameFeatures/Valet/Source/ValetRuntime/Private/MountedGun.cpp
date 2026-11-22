#include "MountedGun.h"

FMountedGun::FMountedGun() {
    this->SkeletalMesh = NULL;
    this->AnimInstanceWeapon = NULL;
    this->AttachmentAngleOffset = 0.00f;
    this->AnimInstancePawn = NULL;
    this->bHasApplied = false;
}

