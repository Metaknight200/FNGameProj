#include "GoatOutPersistent.h"

FGoatOutPersistent::FGoatOutPersistent() {
    // Initialize reflected value fields omitted by the dump.
    this->LeanPositionBL = FVector::ZeroVector;
    this->LeanPositionBR = FVector::ZeroVector;
    this->LeanPositionFR = FVector::ZeroVector;
    this->LeanPositionTargetBL = FVector::ZeroVector;
    this->LeanPositionTargetBR = FVector::ZeroVector;
    this->LeanPositionTargetFR = FVector::ZeroVector;
}

