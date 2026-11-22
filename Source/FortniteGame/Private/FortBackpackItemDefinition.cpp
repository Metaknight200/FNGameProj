#include "FortBackpackItemDefinition.h"
#include "EFortItemType.h"

UFortBackpackItemDefinition::UFortBackpackItemDefinition() {
    this->ItemType = EFortItemType::BackpackPickup;
    this->bNeverPersisted = true;
    this->bAllowMultipleStacks = false;
}


