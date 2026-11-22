#include "SmartObjectRenderingComponent.h"

USmartObjectRenderingComponent::USmartObjectRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
    this->ReferenceDrawingMode = ESOReferenceDrawingMode::Default;
}


