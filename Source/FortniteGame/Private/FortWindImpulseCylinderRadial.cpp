#include "FortWindImpulseCylinderRadial.h"

FFortWindImpulseCylinderRadial::FFortWindImpulseCylinderRadial() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->WorldBounds = FBox(ForceInit);
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
    this->Magnitude = 0.00f;
    this->bIsChanging = false;
    this->bIsChangePending = false;
}

