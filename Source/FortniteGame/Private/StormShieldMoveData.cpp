#include "StormShieldMoveData.h"

FStormShieldMoveData::FStormShieldMoveData() {
    // Initialize reflected value fields omitted by the dump.
    this->StartingLocation = FVector::ZeroVector;
    this->TargetLocation = FVector::ZeroVector;
    this->MoveRate = 0.00f;
    this->SafeAreaStartLocationChangeTime = 0.00f;
    this->SafeAreaFinishLocationChangeTime = 0.00f;
}

