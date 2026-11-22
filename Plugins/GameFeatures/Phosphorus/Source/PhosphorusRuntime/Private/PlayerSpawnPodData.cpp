#include "PlayerSpawnPodData.h"

FPlayerSpawnPodData::FPlayerSpawnPodData() {
    // Initialize reflected value fields omitted by the dump.
    this->EndLocation = FVector::ZeroVector;
    this->StartLocation = FVector::ZeroVector;
    this->ID = 0;
    this->State = EPlayerSpawnPodState::Setup;
    this->PodActor = NULL;
    this->LandTime = 0.00f;
    this->NextEjectYaw = 0.00f;
    this->EjectYawIncrement = 0.00f;
}

