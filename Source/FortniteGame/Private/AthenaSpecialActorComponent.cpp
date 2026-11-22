#include "AthenaSpecialActorComponent.h"

UAthenaSpecialActorComponent::UAthenaSpecialActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseCompassIcon = false;
}

void UAthenaSpecialActorComponent::SetSeasonItemTag(const FGameplayTag& InSeasonItemTag) {
}


