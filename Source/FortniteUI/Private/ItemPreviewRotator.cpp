#include "ItemPreviewRotator.h"

AItemPreviewRotator::AItemPreviewRotator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraTransitionLerpDuration = 1.00f;
}


FInterpolatedTransitionCamera AItemPreviewRotator::GetInterpolatedTransitionCameraPosition(const FTransform& TransitionCameraTransform, float TransitionCameraFieldOfView, float ProgressThroughTransitionSecs, float TransitionDurationSecs) const {
    return FInterpolatedTransitionCamera{};
}

void AItemPreviewRotator::CameraTransitionComplete() {
}


