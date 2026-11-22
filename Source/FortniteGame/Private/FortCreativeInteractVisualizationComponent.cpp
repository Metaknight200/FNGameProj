#include "FortCreativeInteractVisualizationComponent.h"

UFortCreativeInteractVisualizationComponent::UFortCreativeInteractVisualizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionComponentClass = NULL;
    this->CollisionComponentAreaClass = NULL;
    this->FloatCurve = NULL;
    this->StaticMesh = NULL;
    this->StaticMeshMaterial = NULL;
    this->TransitionInterval = 0.00f;
    this->CurrentTime = 0.00f;
    this->VisualizationDiameterStart = 0.00f;
    this->VisualizationDiameterDesired = 0.00f;
    this->InteractRadius = -1.00f;
    this->bPendingShow = false;
}

void UFortCreativeInteractVisualizationComponent::SetRadius(const float InInteractRadius) {
}

void UFortCreativeInteractVisualizationComponent::OnPlayModeChanged(AFortMinigame* InMinigame, bool bIsInPlayMode) {
}

bool UFortCreativeInteractVisualizationComponent::HasInteractRadius() const {
    return false;
}

UStaticMeshComponent* UFortCreativeInteractVisualizationComponent::GetVisualMeshComponent() const {
    return NULL;
}

float UFortCreativeInteractVisualizationComponent::GetVisualizationDiameterStart() const {
    return VisualizationDiameterStart;
}

float UFortCreativeInteractVisualizationComponent::GetVisualizationDiameterDesired() const {
    return VisualizationDiameterDesired;
}

bool UFortCreativeInteractVisualizationComponent::GetPendingShow() const {
    return bPendingShow;
}

float UFortCreativeInteractVisualizationComponent::GetInteractRadius() const {
    return InteractRadius;
}

float UFortCreativeInteractVisualizationComponent::GetCurrentTime() const {
    return CurrentTime;
}

UShapeComponent* UFortCreativeInteractVisualizationComponent::GetCollisionComponent() const {
    return NULL;
}






