#include "FortWeatherAugment.h"

AFortWeatherAugment::AFortWeatherAugment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FGameplayTagContainer AFortWeatherAugment::GetWeatherTags() const {
    return FGameplayTagContainer{};
}


