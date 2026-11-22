#include "BuildingActorHotSpotDirection.h"

FBuildingActorHotSpotDirection::FBuildingActorHotSpotDirection() {
    // Initialize reflected value fields omitted by the dump.
    this->Offset = FVector::ZeroVector;
    this->HotSpotConfig = NULL;
    this->bMirrorX = false;
    this->bMirrorY = false;
    this->Direction = EFortHotSpotDirection::PositiveX;
    this->TypeConfigUsage = EHotspotTypeConfigMode::AlwaysAdd;
}

