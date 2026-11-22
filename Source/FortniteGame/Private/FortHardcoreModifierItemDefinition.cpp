#include "FortHardcoreModifierItemDefinition.h"
#include "EFortItemType.h"

UFortHardcoreModifierItemDefinition::UFortHardcoreModifierItemDefinition() {
    this->ItemType = EFortItemType::HardcoreModifier;
    this->bAllowMultipleStacks = false;
}


