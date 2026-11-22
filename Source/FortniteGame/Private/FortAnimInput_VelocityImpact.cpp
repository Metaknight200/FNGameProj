#include "FortAnimInput_VelocityImpact.h"

FFortAnimInput_VelocityImpact::FFortAnimInput_VelocityImpact() {
    // Initialize reflected value fields omitted by the dump.
    this->DeltaVelocityThreshold = FVector::ZeroVector;
    this->ImpactScale = FVector::ZeroVector;
    this->LastVelocity = FVector::ZeroVector;
    this->TestVelocity = FVector::ZeroVector;
    this->bTestVelocity = false;
    this->bIsForwardImpact = false;
    this->bIsBackwardImpact = false;
    this->bIsLeftImpact = false;
    this->bIsRightImpact = false;
    this->bIsUpImpact = false;
    this->bIsDownImpact = false;
}

