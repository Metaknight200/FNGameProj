#include "FortOutpostItemDefinition.h"
#include "EFortItemType.h"

UFortOutpostItemDefinition::UFortOutpostItemDefinition() {
    this->ItemType = EFortItemType::Outpost;
    this->TheaterIndex = 0;
}

FText UFortOutpostItemDefinition::GetLongDescription() const {
    return FText::GetEmpty();
}


