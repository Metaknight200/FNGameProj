#include "FortCameraMode_AthenaAircraft.h"

UFortCameraMode_AthenaAircraft::UFortCameraMode_AthenaAircraft() {
    this->bPreventPenetration = false;
    this->bDoPredictiveAvoidance = false;
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
}


