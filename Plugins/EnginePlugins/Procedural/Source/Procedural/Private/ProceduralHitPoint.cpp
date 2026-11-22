#include "ProceduralHitPoint.h"

FProceduralHitPoint::FProceduralHitPoint() {
    // Initialize reflected value fields omitted by the dump.
    this->Normal = FVector::ZeroVector;
    this->Position = FVector::ZeroVector;
    this->bIsTraceDone = false;
}

