#include "FortUICameraFrameTargetSettings.h"

FFortUICameraFrameTargetSettings::FFortUICameraFrameTargetSettings() {
    // Initialize reflected value fields omitted by the dump.
    this->FocusObjectRotation = FRotator::ZeroRotator;
    this->FocusPointToCenter = FVector::ZeroVector;
    this->BoundingBehavior = EFortUICameraFrameTargetBoundingBehavior::NoBounds;
}

