#include "CreativeSelectedActorInfo.h"

FCreativeSelectedActorInfo::FCreativeSelectedActorInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->DragStartGridSnapPoint = FVector::ZeroVector;
    this->ScaleAtDragStart = FVector::ZeroVector;
    this->Actor = NULL;
    this->OriginalRelevancyDistance = 0.00f;
    this->bWasCollisionEnabled = false;
    this->bWasDormant = false;
    this->bSpawnedFromSaveRecord = false;
    this->LogicalConnectionChainIndex = 0;
}

