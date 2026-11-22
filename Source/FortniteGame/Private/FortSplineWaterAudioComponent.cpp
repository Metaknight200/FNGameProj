#include "FortSplineWaterAudioComponent.h"

UFortSplineWaterAudioComponent::UFortSplineWaterAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InsideSplineSound = NULL;
    this->SplineEndSound = NULL;
    this->SplineFacingDirection = ESplineWaterAudioFacingDirection::None;
    this->bIsExclusionSpline = false;
    this->ShorelineOffset = 0.00f;
    this->TerrainZOffset = 32.00f;
    this->MaxVerticalDistanceToCheckInside = 20000.00f;
    this->WaterBodyOwner = NULL;
}

void UFortSplineWaterAudioComponent::UpdateAudioZones(const TArray<FSplineWaterAudioZone>& NewZones) {
}


