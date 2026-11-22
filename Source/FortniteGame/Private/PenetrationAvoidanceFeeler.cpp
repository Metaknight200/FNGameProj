#include "PenetrationAvoidanceFeeler.h"

FPenetrationAvoidanceFeeler::FPenetrationAvoidanceFeeler() {
    // Initialize reflected value fields omitted by the dump.
    this->AdjustmentRot = FRotator::ZeroRotator;
    this->WorldWeight = 0.00f;
    this->PawnWeight = 0.00f;
    this->Extent = 0.00f;
    this->TraceInterval = 0;
    this->FramesUntilNextTrace = 0;
}

