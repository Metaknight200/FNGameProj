#include "GoaFInPersistent.h"

FGoaFInPersistent::FGoaFInPersistent() {
    // Initialize reflected value fields omitted by the dump.
    this->BounceOffsetBL = FVector::ZeroVector;
    this->BounceOffsetBR = FVector::ZeroVector;
    this->BounceOffsetFR = FVector::ZeroVector;
    this->LeanSocketPositionBL = FVector::ZeroVector;
    this->LeanSocketPositionBR = FVector::ZeroVector;
    this->LeanSocketPositionFR = FVector::ZeroVector;
    this->FortGoatVehicleConfigs = NULL;
    this->PowerSlideState = EPowerSlideState::None;
    this->AccumulatedPowerSlideBoostDiscrete = 0.00f;
    this->TopSpeedCurrentMultiplier = 0.00f;
    this->PushForceCurrentMultiplier = 0.00f;
    this->AngularSpeedEnterPowerSlide = 0.00f;
    this->LeanImpulseScaleFR = 0.00f;
    this->LeanImpulseScaleBR = 0.00f;
    this->LeanImpulseScaleBL = 0.00f;
    this->BounceForceFR = 0.00f;
    this->BounceForceBR = 0.00f;
    this->BounceForceBL = 0.00f;
}

