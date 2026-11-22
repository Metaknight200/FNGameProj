#include "StormWind.h"

FStormWind::FStormWind() {
    // Initialize reflected value fields omitted by the dump.
    this->Direction = FVector::ZeroVector;
    this->Location = FVector::ZeroVector;
    this->Radius = 0.00f;
    this->Magnitude = 0.00f;
    this->ThreatVisualsManager = NULL;
}

