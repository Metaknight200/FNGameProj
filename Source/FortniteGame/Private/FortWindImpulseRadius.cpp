#include "FortWindImpulseRadius.h"

FFortWindImpulseRadius::FFortWindImpulseRadius() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->WorldBounds = FBox(ForceInit);
    this->Radius = 0.00f;
    this->CurrentRadius = 0.00f;
    this->PreviousRadius = 0.00f;
    this->Magnitude = 0.00f;
    this->CurrentMagnitude = 0.00f;
    this->PreviousMagnitude = 0.00f;
    this->BlendTime = 0.00f;
    this->CurrentBlendTime = 0.00f;
}

