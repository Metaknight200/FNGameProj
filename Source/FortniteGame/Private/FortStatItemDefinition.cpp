#include "FortStatItemDefinition.h"
#include "EFortItemType.h"

UFortStatItemDefinition::UFortStatItemDefinition() {
    this->ItemType = EFortItemType::Stat;
    this->bAllowMultipleStacks = false;
    this->Stat = EFortStatType::Invalid;
}


