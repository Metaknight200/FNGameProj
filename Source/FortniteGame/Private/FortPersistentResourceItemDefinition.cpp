#include "FortPersistentResourceItemDefinition.h"
#include "EFortItemType.h"

UFortPersistentResourceItemDefinition::UFortPersistentResourceItemDefinition() {
    this->ItemType = EFortItemType::AccountResource;
    this->bAllowMultipleStacks = false;
    this->bIsEventItem = false;
}

bool UFortPersistentResourceItemDefinition::IsEventItem() const {
    return false;
}


