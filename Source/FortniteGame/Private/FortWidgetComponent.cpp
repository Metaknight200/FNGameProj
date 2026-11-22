#include "FortWidgetComponent.h"

UFortWidgetComponent::UFortWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bClampProjectedLocalPositionToViewport = false;
    this->ClampPaddingTop = 0.00f;
    this->ClampPaddingBottom = 0.00f;
    this->ClampPaddingLeft = 0.00f;
    this->ClampPaddingRight = 0.00f;
}


