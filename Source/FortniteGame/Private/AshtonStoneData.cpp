#include "AshtonStoneData.h"

FAshtonStoneData::FAshtonStoneData() {
    // Initialize reflected value fields omitted by the dump.
    this->MapIconScale = FVector2D::ZeroVector;
    this->StoneType = EAshtonStoneType::Purple;
    this->StoneItemDefinition = NULL;
    this->InitialStoneState = EAshtonStoneStateType::NotSpawned;
}

