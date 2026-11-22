#include "ItemPreviewSwapper.h"

AItemPreviewSwapper::AItemPreviewSwapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraTransitionCurve = NULL;
    this->CameraTransitionLerpDuration = 1.00f;
}

void AItemPreviewSwapper::UpdatePreviousSceneTransform(const FTransform& RelativeTransform) {
}

void AItemPreviewSwapper::UpdateNewSceneTransform(const FTransform& RelativeTransform) {
}

void AItemPreviewSwapper::SwapComplete() {
}



