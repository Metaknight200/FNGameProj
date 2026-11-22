#include "MapLandComponent.h"

UMapLandComponent::UMapLandComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShadowLayer = false;
}

void UMapLandComponent::UpdateMinimapDetailsLocation(const FVector& InLocation) {
}


