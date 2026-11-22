#include "HoagieInPersistent.h"

FHoagieInPersistent::FHoagieInPersistent() {
    // Initialize reflected value fields omitted by the dump.
    this->RotorHitAngularImpulse = FVector::ZeroVector;
    this->RotorHitLinearImpulse = FVector::ZeroVector;
    this->FortHoagieVehicleConfigs = NULL;
    this->CurrentHoagieState = EHoagieState::STARTUP;
    this->LastRotorImpulseTime = 0.00f;
}

