#include "FortGameplayModifierItemDefinition.h"
#include "EFortItemType.h"

UFortGameplayModifierItemDefinition::UFortGameplayModifierItemDefinition() {
    this->ItemType = EFortItemType::GameplayModifier;
    this->bHiddenInUI = false;
}

bool UFortGameplayModifierItemDefinition::IsHiddenInUI() const {
    return false;
}


