#include "ProceduralScatterProjectionPoint.h"

FProceduralScatterProjectionPoint::FProceduralScatterProjectionPoint() {
    // Initialize reflected value fields omitted by the dump.
    this->EndTrace = FVector::ZeroVector;
    this->GenerationLocation = FVector::ZeroVector;
    this->Rotation = FRotator::ZeroRotator;
    this->StartTrace = FVector::ZeroVector;
    this->Scale = 0.00f;
    this->ScatterSettings = NULL;
    this->VariationIdx = 0;
}

