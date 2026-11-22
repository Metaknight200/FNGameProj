#include "FortAIHotSpot.h"
#include "FortNavigationFilter_NoSmashingIncludeLow.h"

AFortAIHotSpot::AFortAIHotSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FilterClass = UFortNavigationFilter_NoSmashingIncludeLow::StaticClass();
}


