#include "FortAudioCurveVector.h"

UFortAudioCurveVector::UFortAudioCurveVector() {
    this->ExternalCurves[0] = NULL;
    this->ExternalCurves[1] = NULL;
    this->ExternalCurves[2] = NULL;
    this->AudioCurves.AddDefaulted(3);
    this->OriginalAudioCurves.AddDefaulted(3);
    this->ModifiedAudioCurves.AddDefaulted(3);
}

void UFortAudioCurveVector::SetActiveCurves(EVectorCurveType CurveType) {
}

void UFortAudioCurveVector::InitializeAudioCurveVector() {
}

void UFortAudioCurveVector::ImportFloatCurve(EVectorCurveFloat Element, UCurveFloat* Curve) {
}

void UFortAudioCurveVector::ImportAttenuationCurve(EVectorCurveFloat Element, FRuntimeFloatCurve& Curve, float MaxDistance) {
}

float UFortAudioCurveVector::GetLargestMaxDistance() const {
    return 0.0f;
}

FVector UFortAudioCurveVector::GetAudioCurveVectorValue(const float InTime) const {
    return FVector{};
}

void UFortAudioCurveVector::ExportCurves(EVectorCurveType CurveType) {
}


