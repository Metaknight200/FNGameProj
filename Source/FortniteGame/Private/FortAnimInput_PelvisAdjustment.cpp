#include "FortAnimInput_PelvisAdjustment.h"

FFortAnimInput_PelvisAdjustment::FFortAnimInput_PelvisAdjustment() {
    // Initialize reflected value fields omitted by the dump.
    this->CurrentEmotePelvisOffset = FVector::ZeroVector;
    this->PawnMesh = NULL;
    this->DistanceToFeet = 0.00f;
    this->LegLength = 0.00f;
    this->DesiredLegLengthTreshold = 0.00f;
    this->DotProductBetweenUpVectorsTreshold = 0.00f;
    this->PelvisInterpSpeed = 0.00f;
    this->EmotePelvisOffsetInterpSpeed = 0.00f;
    this->EmotePelvisOffsetAlpha = 0.00f;
    this->PelvisBoneIndex = 0;
    this->FootLeftBoneIndex = 0;
    this->FootRightBoneIndex = 0;
}

