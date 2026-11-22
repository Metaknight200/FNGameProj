#include "AnimSpinner.h"

FAnimSpinner::FAnimSpinner() {
    // Initialize reflected value fields omitted by the dump.
    this->Rotation = FRotator::ZeroRotator;
    this->RotationAxis = FVector::ZeroVector;
    this->BaseRotationSpeed = 0.00f;
    this->RotationRate = 0.00f;
    this->InterpolationRateSpeedUp = 0.00f;
    this->InterpolationRateSlowDown = 0.00f;
    this->RotationAngle = 0.00f;
}

