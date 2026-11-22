#include "NevadaInPersistent.h"

FNevadaInPersistent::FNevadaInPersistent() {
    // Initialize reflected value fields omitted by the dump.
    this->CrashingDesiredUp = FVector::ZeroVector;
    this->FortNevadaVehicleConfigs = NULL;
    this->bBoostThrust = false;
    this->bBoostDrag = false;
    this->TractorBeamExtraLengthForExtents = 0.00f;
    this->bUseTractorBeamUprightForce = false;
    this->CurrentVehicleState = ENevadaFlightStates::FLIGHT;
}

