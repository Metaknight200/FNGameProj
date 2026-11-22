#include "BuildingMusicSequencer.h"

ABuildingMusicSequencer::ABuildingMusicSequencer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bAllowHostileBlueprintInteraction = true;
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->TriggerInstigator = NULL;
    this->CachedTriggerInstigator = NULL;
}

void ABuildingMusicSequencer::ResetHitActors() {
}

void ABuildingMusicSequencer::HitActorsAsync(const FTransform& Transform, const FBoxSphereBounds& Bounds) {
}


