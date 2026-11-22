#include "PlayspaceSpawningInfo.h"

FPlayspaceSpawningInfo::FPlayspaceSpawningInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->LastLocation = FVector::ZeroVector;
    this->SpawnLocation = FVector::ZeroVector;
    this->SpawnRotation = FRotator::ZeroRotator;
    this->SpawnTimeServer = 0.00f;
    this->MinTimeForCameraFadeTransition = 0.00f;
}

