#include "BuffetWaveVectorInput.h"

FBuffetWaveVectorInput::FBuffetWaveVectorInput() {
    // Initialize reflected value fields omitted by the dump.
    this->Amplitudes = FRotator::ZeroRotator;
    this->Frequencies = FRotator::ZeroRotator;
    this->Max = FVector::ZeroVector;
    this->Min = FVector::ZeroVector;
    this->Offsets = FRotator::ZeroRotator;
    this->bUseNoise = false;
}

