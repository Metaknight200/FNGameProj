#include "RadiusTrackingInitializer.h"

FRadiusTrackingInitializer::FRadiusTrackingInitializer() {
    // Initialize reflected value fields omitted by the dump.
    this->CircleColor = FLinearColor::Transparent;
    this->MaxCenterOffset = 0.00f;
    this->MinimumRadius = 0.00f;
    this->MaximumRadius = 0.00f;
    this->CircleDrawingMaterial = NULL;
    this->TimeBetweenUpdatesInSeconds = 0.00f;
    this->RadiusAmountToShrinkEachUpdate = 0.00f;
    this->GroupingType = ERadiusTrackingGroupingType::Global;
}

