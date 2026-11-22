#include "RadiusTrackingDisplayInfo.h"

FRadiusTrackingDisplayInfo::FRadiusTrackingDisplayInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->CircleColor = FLinearColor::Transparent;
    this->TrackedCenter = FVector2D::ZeroVector;
    this->TrackedActor = NULL;
    this->TrackedRadius = 0.00f;
    this->CircleMaterial = NULL;
    this->MiniMapMID = NULL;
    this->FullMapMID = NULL;
    this->RadiusTrackerComponent = NULL;
}

