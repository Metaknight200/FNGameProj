#include "FortRespawnData.h"

FFortRespawnData::FFortRespawnData() {
    // Initialize reflected value fields omitted by the dump.
    this->RespawnLocation = FVector::ZeroVector;
    this->RespawnRotation = FRotator::ZeroRotator;
    this->bRespawnDataAvailable = false;
    this->bClientIsReady = false;
    this->bServerIsReady = false;
    this->RespawnCameraDistance = 0.00f;
}

