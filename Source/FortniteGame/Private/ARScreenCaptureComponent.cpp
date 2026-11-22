#include "ARScreenCaptureComponent.h"
#include "Components/SceneCaptureComponent.h"

UARScreenCaptureComponent::UARScreenCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives;
    this->CaptureSource = SCS_SceneColorSceneDepth;
    this->bUseCustomProjectionMatrix = true;
}

void UARScreenCaptureComponent::UpdateScreenProjectionMatrix(const FVector& ViewLocation, const FVector& PlaneLocation, const FRotator& PlaneRotation, const FVector2D& PlaneSize) {
}


