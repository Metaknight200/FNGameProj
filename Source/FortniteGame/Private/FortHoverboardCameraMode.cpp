#include "FortHoverboardCameraMode.h"

UFortHoverboardCameraMode::UFortHoverboardCameraMode() {
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->VelocityBasedFOVIncreaseCurve = NULL;
}


