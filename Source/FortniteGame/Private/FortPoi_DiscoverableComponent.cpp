#include "FortPoi_DiscoverableComponent.h"

UFortPoi_DiscoverableComponent::UFortPoi_DiscoverableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableMapLocationText = false;
    this->DiscoverMinimapBitId = -1;
}


