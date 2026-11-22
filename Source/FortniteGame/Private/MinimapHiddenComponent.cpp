#include "MinimapHiddenComponent.h"

UMinimapHiddenComponent::UMinimapHiddenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
}

void UMinimapHiddenComponent::PrepareForCapture() {
}


