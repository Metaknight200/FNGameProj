#include "FortSpawnSlotData.h"

FFortSpawnSlotData::FFortSpawnSlotData() {
    // Initialize reflected value fields omitted by the dump.
    this->SpawnSlotLocation = FVector::ZeroVector;
    this->OccupyingAI = NULL;
    this->SlotStatus = EFortRiftSlotStatus::Reserved;
}

