#include "ReplicatedSpawnInfo.h"

FReplicatedSpawnInfo::FReplicatedSpawnInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->LastLocation = FVector::ZeroVector;
    this->SpawnLocation = FVector::ZeroVector;
    this->SpawnRotation = FRotator::ZeroRotator;
    this->ServerSpawnTime = 0.00f;
    this->MinTimeForCameraFadeTransition = 0.00f;
}

