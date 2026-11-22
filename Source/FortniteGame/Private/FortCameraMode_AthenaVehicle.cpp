#include "FortCameraMode_AthenaVehicle.h"

UFortCameraMode_AthenaVehicle::UFortCameraMode_AthenaVehicle() {
    this->bPreventPenetration = false;
    this->bDoPredictiveAvoidance = false;
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
}


