#include "FortCollisionAudioTriggerData.h"

FFortCollisionAudioTriggerData::FFortCollisionAudioTriggerData() {
    // Initialize reflected value fields omitted by the dump.
    this->ImpulseMagnitudeRange = FVector2D::ZeroVector;
    this->PitchRange = FVector2D::ZeroVector;
    this->VolumeRange = FVector2D::ZeroVector;
    this->Asset = NULL;
    this->bImpulseMagnitudeLowerBound = false;
    this->bImpulseMagnitudeUpperBound = false;
    this->MinRetriggerTime = 0.00f;
    this->MaxTriggerDistance = 0.00f;
}

