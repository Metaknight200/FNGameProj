#include "Umami3DNavigationSystemAreaRenderingComponent.h"

UUmami3DNavigationSystemAreaRenderingComponent::UUmami3DNavigationSystemAreaRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


