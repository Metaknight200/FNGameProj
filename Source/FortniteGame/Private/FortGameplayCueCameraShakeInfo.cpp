#include "FortGameplayCueCameraShakeInfo.h"

FFortGameplayCueCameraShakeInfo::FFortGameplayCueCameraShakeInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->UserPlaySpaceRotation = FRotator::ZeroRotator;
    this->Shake = NULL;
    this->Scale = 0.00f;
    this->Playspace = ECameraShakePlaySpace::CameraLocal;
    this->bAlwaysPlayOnTarget = false;
    this->bCalculateUserPlaySpaceRotationFromLocation = false;
    this->bCancelOnRemove = false;
}

