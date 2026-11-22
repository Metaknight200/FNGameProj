#include "FortAxisSmoothing.h"

FFortAxisSmoothing::FFortAxisSmoothing() {
    // Initialize reflected value fields omitted by the dump.
    this->AverageValue = FVector::ZeroVector;
    this->ZeroTime = 0.00f;
    this->Samples = 0;
    this->TotalSampleTime = 0.00f;
}

