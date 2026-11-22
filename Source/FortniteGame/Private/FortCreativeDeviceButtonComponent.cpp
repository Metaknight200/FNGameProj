#include "FortCreativeDeviceButtonComponent.h"

UFortCreativeDeviceButtonComponent::UFortCreativeDeviceButtonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeightOffset = 0;
    this->EditWidget = NULL;
}

void UFortCreativeDeviceButtonComponent::SetButtonLabel(const FText& InButtonLabel) {
}


