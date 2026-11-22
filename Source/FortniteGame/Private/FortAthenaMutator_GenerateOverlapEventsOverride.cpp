#include "FortAthenaMutator_GenerateOverlapEventsOverride.h"

AFortAthenaMutator_GenerateOverlapEventsOverride::AFortAthenaMutator_GenerateOverlapEventsOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bGenerateOverlapEventsOverrideValue = true;
    this->Radius = 0.00f;
}

void AFortAthenaMutator_GenerateOverlapEventsOverride::SetRadius(float NewRadius) {
}

void AFortAthenaMutator_GenerateOverlapEventsOverride::SetCenterLocation(FVector NewCenterLocation) {
}


