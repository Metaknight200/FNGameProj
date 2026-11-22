#include "IndicatedActorData.h"

FIndicatedActorData::FIndicatedActorData() {
    // Initialize reflected value fields omitted by the dump.
    this->IndicatorDBNOOffset = FVector::ZeroVector;
    this->IndicatorOffset = FVector::ZeroVector;
    this->Duration = 0.00f;
    this->StepTime = 0.00f;
    this->ShareActorWith = EShareActorWith::None;
    this->ShareActorWithMask = 0;
    this->DisplayTeamOverride = 0;
    this->bClampToScreen = false;
    this->Sound = NULL;
    this->StateImageOverride = EIndicatorStateImage::Default;
}

