#include "FortCameraMode_Hoagie.h"

UFortCameraMode_Hoagie::UFortCameraMode_Hoagie() {
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->CurrentRollMultiplier = 0.15f;
    this->CurrentPitchMultiplier = 0.15f;
    this->BaseRollMultiplier = 0.15f;
    this->BasePitchMultiplier = 0.15f;
    this->BoostRollMultiplier = 0.50f;
    this->BoostPitchMultiplier = 0.20f;
    this->BoostRollDampFactor = 0.20f;
    this->BoostRollRecoveryDampFactor = 0.75f;
    this->BoostRecoveryInterpSpeed = 0.00f;
}


