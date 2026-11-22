#include "ChaseExternalForce.h"

FChaseExternalForce::FChaseExternalForce() {
    // Initialize reflected value fields omitted by the dump.
    this->Direction = FVector::ZeroVector;
    this->Duration = 0.00f;
    this->Magnitude = 0.00f;
    this->MagnitudeScaleCurve = NULL;
}

