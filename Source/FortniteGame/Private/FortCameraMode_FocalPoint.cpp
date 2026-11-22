#include "FortCameraMode_FocalPoint.h"

UFortCameraMode_FocalPoint::UFortCameraMode_FocalPoint() {
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->InterpolatedFOV = 0.00f;
    this->FOVInterpSpeed = 5.00f;
}


