#include "FortItemViewSettings.h"

FFortItemViewSettings::FFortItemViewSettings() {
    // Initialize reflected value fields omitted by the dump.
    this->CameraRotationOffset = FRotator::ZeroRotator;
    this->MeshBoundsCenterOffset = FVector::ZeroVector;
    this->UsesPlacementActor = false;
    this->UsesFixedCamera = false;
    this->SupportsZooming = false;
    this->DefaultZoomLevel = 0.00f;
    this->RotationMode = EFortItemViewRotationMode::None;
}

