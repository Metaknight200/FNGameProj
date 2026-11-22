#include "PatrolPathRenderingComponent.h"

UPatrolPathRenderingComponent::UPatrolPathRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


