#include "FortAthenaBeaconComponent.h"

UFortAthenaBeaconComponent::UFortAthenaBeaconComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxAttractedBots = 1;
    this->AttractionRadius = 5000.00f;
    this->bIsConsumed = false;
}


