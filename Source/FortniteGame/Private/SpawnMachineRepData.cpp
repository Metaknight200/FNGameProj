#include "SpawnMachineRepData.h"

FSpawnMachineRepData::FSpawnMachineRepData() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->SpawnMachineState = ESpawnMachineState::Default;
    this->SpawnMachineCooldownStartTime = 0.00f;
    this->SpawnMachineCooldownEndTime = 0.00f;
    this->SpawnMachineRepDataHandle = 0;
}

