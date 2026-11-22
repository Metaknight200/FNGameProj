#include "AthenaSeasonTreasureItemDefinition.h"
#include "EFortItemType.h"

UAthenaSeasonTreasureItemDefinition::UAthenaSeasonTreasureItemDefinition() {
    this->ItemType = EFortItemType::AthenaSeasonTreasure;
    this->bAllowMultipleStacks = false;
}


