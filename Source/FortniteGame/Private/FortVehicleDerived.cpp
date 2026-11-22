#include "FortVehicleDerived.h"

FFortVehicleDerived::FFortVehicleDerived() {
    // Initialize reflected value fields omitted by the dump.
    this->LocalFrontFrictionPt = FVector::ZeroVector;
    this->LocalRearFrictionPt = FVector::ZeroVector;
    this->FrontMassRatio = 0.00f;
    this->RearMassRatio = 0.00f;
}

