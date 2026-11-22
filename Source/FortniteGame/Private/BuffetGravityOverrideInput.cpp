#include "BuffetGravityOverrideInput.h"

FBuffetGravityOverrideInput::FBuffetGravityOverrideInput() {
    // Initialize reflected value fields omitted by the dump.
    this->Amplitude = FVector::ZeroVector;
    this->Frequency = FVector::ZeroVector;
    this->Offset = FVector::ZeroVector;
    this->TimeOffset = 0.00f;
    this->PerlinScale = 0.00f;
}

