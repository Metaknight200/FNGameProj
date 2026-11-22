#include "HitData.h"

FHitData::FHitData() {
    // Initialize reflected value fields omitted by the dump.
    this->HitNormal = FVector::ZeroVector;
    this->PingOfHitter = 0.00f;
    this->HittingPawn = NULL;
}

