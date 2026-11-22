#include "ProceduralScatterSettings.h"

UProceduralScatterSettings::UProceduralScatterSettings() {
    this->Content = NULL;
    this->bContentVariationsModifiersEnabled = true;
    this->CollisionRadius = 100.00f;
    this->bAutomaticCollisionRadius = false;
    this->bUseSphericalBoundsForAutomaticCollisionRadius = false;
    this->AutomaticCollisionRadiusScaleFactor = 1.00f;
    this->DistributionSeed = 0;
    this->bDensityModifiersEnabled = true;
    this->Density = 1.00f;
    this->bUseSourcePointExactNumber = true;
    this->SourcePointExactNumber = 10;
    this->bScaleModifiersEnabled = true;
    this->bRotationModifiersEnabled = true;
    this->bAlignToNormal = true;
    this->AlignMaxAngle = 0.00f;
    this->bDetectOverhangingLedge = false;
    this->OverhangingLedgeDetectionRayCount = 4;
    this->OverhangingLedgeDetectionLength = 200.00f;
    this->OverhangingLedgeDetectionVerticalThreshold = 30.00f;
    this->OverhangingLedgeDetectionRadiusScale = 1.00f;
    this->FilterMinimumScale = 0.00f;
    this->OverlapPriority = 0.00f;
    this->bCollisionWithWorld = false;
}

void UProceduralScatterSettings::SetSourcePointDistanceMin(float InValue) {
}

void UProceduralScatterSettings::SetSourcePointDistanceMax(float InValue) {
}

float UProceduralScatterSettings::GetSourcePointDistanceMin() const {
    return 0.0f;
}

float UProceduralScatterSettings::GetSourcePointDistanceMax() const {
    return 0.0f;
}


