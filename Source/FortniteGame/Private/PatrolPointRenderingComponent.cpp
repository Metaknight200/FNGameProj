#include "PatrolPointRenderingComponent.h"

UPatrolPointRenderingComponent::UPatrolPointRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


