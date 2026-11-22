#include "FortWorldMarkerData.h"

FFortWorldMarkerData::FFortWorldMarkerData() {
    // Initialize reflected value fields omitted by the dump.
    this->BasePosition = FVector::ZeroVector;
    this->BasePositionOffset = FVector::ZeroVector;
    this->WorldNormal = FVector::ZeroVector;
    this->Owner = NULL;
    this->MarkerType = EFortWorldMarkerType::None;
    this->ItemDefinition = NULL;
    this->ItemCount = 0;
    this->MarkedActor = NULL;
    this->bIncludeSquad = false;
    this->bHasCustomDisplayInfo = false;
    this->bUseHoveredMarkerDetail = false;
    this->MarkerInstance = NULL;
}

