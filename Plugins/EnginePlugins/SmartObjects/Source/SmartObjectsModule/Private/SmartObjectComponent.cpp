#include "SmartObjectComponent.h"

USmartObjectComponent::USmartObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExecutionPriorityOverride = 0;
    this->bRichSmartObjectOwner = false;
    this->bRichSmartObjectComponent = false;
}


