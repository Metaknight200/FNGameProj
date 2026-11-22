#include "BuildingGameplayActorQuest.h"

ABuildingGameplayActorQuest::ABuildingGameplayActorQuest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSuppressSimpleInteractionWidgetForTouch = true;
}

FGameplayTagContainer ABuildingGameplayActorQuest::GetStaticGameplayTags() {
    return FGameplayTagContainer{};
}


