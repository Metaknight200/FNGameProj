#include "FortAccountBuffItemDefinition.h"
#include "EFortItemType.h"

UFortAccountBuffItemDefinition::UFortAccountBuffItemDefinition() {
    this->ItemType = EFortItemType::Buff;
    this->bAllowMultipleStacks = false;
}


