#include "FortCameraMode_Nevada.h"

UFortCameraMode_Nevada::UFortCameraMode_Nevada() {
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->TractorBeamCameraLerpTime = 1.00f;
    this->TractorBeamCameraExtraPitch = 5.00f;
    this->TractorBeamInactiveCameraExtraPitch = 5.00f;
    this->TractorBeamCameraPositionResetDelay = 2.00f;
    this->MinPitchForOffset = 0.00f;
    this->MaxPitchForOffset = -50.00f;
}


