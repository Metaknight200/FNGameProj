#include "ProceduralScatterPoint.h"

FProceduralScatterPoint::FProceduralScatterPoint() {
    // Initialize reflected value fields omitted by the dump.
    this->GenerationLocation = FVector::ZeroVector;
    this->Location = FVector::ZeroVector;
    this->Rotation = FRotator::ZeroRotator;
    this->Scale = 0.00f;
    this->ScatterSettings = NULL;
    this->VariationIdx = 0;
}

