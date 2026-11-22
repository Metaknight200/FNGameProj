#include "FortPoiCollisionComponent.h"

UFortPoiCollisionComponent::UFortPoiCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
}


