#include "FortSpectatorCameraComponent.h"

UFortSpectatorCameraComponent::UFortSpectatorCameraComponent(const FObjectInitializer& ObjectInitializer) : Super() {
    this->bConstrainAspectRatio = false;
    this->DefaultLensPresetName = TEXT("Spectator Zoom");
    this->SpectatorController = NULL;
    this->IntendedViewTarget = NULL;
    this->CurrentBlend = NULL;
    this->ScreenFringeFOVCurve = NULL;
    this->ZoomRate = 50.00f;
    this->FocalLengthInterpSpeed = 10.00f;
}

void UFortSpectatorCameraComponent::OnFocalLengthSettingChanged(float NewFocalLength) {
}

void UFortSpectatorCameraComponent::OnApertureSettingChanged(float NewAperture) {
}

float UFortSpectatorCameraComponent::GetAutoCameraCutDistanceThreshold() const {
    return 0.0f;
}


