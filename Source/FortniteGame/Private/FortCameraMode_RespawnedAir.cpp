#include "FortCameraMode_RespawnedAir.h"

UFortCameraMode_RespawnedAir::UFortCameraMode_RespawnedAir() {
    this->bPreventPenetration = false;
    this->bDoPredictiveAvoidance = false;
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
}


