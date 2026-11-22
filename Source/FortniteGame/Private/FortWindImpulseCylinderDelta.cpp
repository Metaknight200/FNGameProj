#include "FortWindImpulseCylinderDelta.h"

FFortWindImpulseCylinderDelta::FFortWindImpulseCylinderDelta() {
    // Initialize reflected value fields omitted by the dump.
    this->DeltaCenter = FVector::ZeroVector;
    this->InnerWorldBounds = FBox(ForceInit);
    this->OuterWorldBounds = FBox(ForceInit);
    this->WindImpulseBounds = FBox(ForceInit);
    this->bInitialized = false;
    this->bRippleOutward = false;
    this->SectionWidth = 0.00f;
    this->InnerSectionRadius = 0.00f;
    this->OuterSectionRadius = 0.00f;
    this->MaximumRadius = 0.00f;
    this->DesiredOverallBlendTime = 0.00f;
    this->SectionBlendTime = 0.00f;
    this->SectionCurrentBlendTime = 0.00f;
    this->PreviousMagnitude = 0.00f;
    this->SectionCurrentMagnitude = 0.00f;
    this->DesiredMagnitude = 0.00f;
}

