#include "BuildingActorHotSpotRenderingComponent.h"

UBuildingActorHotSpotRenderingComponent::UBuildingActorHotSpotRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
    this->Mobility = EComponentMobility::Stationary;
}


