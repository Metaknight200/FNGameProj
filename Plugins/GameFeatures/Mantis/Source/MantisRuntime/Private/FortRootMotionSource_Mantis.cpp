#include "FortRootMotionSource_Mantis.h"

FFortRootMotionSource_Mantis::FFortRootMotionSource_Mantis() {
    // Initialize reflected value fields omitted by the dump.
    this->LatestRepMovementLocation = FVector::ZeroVector;
    this->CurrentTechniqueTime = 0.00f;
    this->TechniqueMontage = NULL;
}

