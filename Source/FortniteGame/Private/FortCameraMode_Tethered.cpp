#include "FortCameraMode_Tethered.h"

UFortCameraMode_Tethered::UFortCameraMode_Tethered() {
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->TetherJumpOffset = -600.00f;
    this->TetherJumpOffsetTime = 1.00f;
    this->TetheredBoostFOV = 0.00f;
    this->FOVInterpSpeed = 0.00f;
}


