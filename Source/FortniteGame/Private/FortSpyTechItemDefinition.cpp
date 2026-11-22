#include "FortSpyTechItemDefinition.h"
#include "EFortItemType.h"

UFortSpyTechItemDefinition::UFortSpyTechItemDefinition() {
    this->ItemType = EFortItemType::SpyTechPerk;
    this->bIsAccountItem = false;
    this->bNeverPersisted = true;
}


