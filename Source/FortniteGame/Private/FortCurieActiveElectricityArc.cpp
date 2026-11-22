#include "FortCurieActiveElectricityArc.h"

FFortCurieActiveElectricityArc::FFortCurieActiveElectricityArc() {
    // Initialize reflected value fields omitted by the dump.
    this->TargetActorSmallestAxis = FVector::ZeroVector;
    this->Mesh = NULL;
    this->OwningComponent = NULL;
    this->StartTime = 0.00f;
    this->bPlayedImpact = false;
}

