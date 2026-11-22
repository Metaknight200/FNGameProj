#include "FortPlaceableActorItemDefinition.h"

UFortPlaceableActorItemDefinition::UFortPlaceableActorItemDefinition() {
    this->BasePlaceableActorClass = NULL;
}

FName UFortPlaceableActorItemDefinition::GetActorName() const {
    return ActorName;
}

UFortPlaceableActorItemDefinition* UFortPlaceableActorItemDefinition::CreatePlaceableActorItemDefinitionFromActor(FBuildingDuplicationData DuplicationData, FSlateBrush ImageToDisplay) {
    return NULL;
}


