#include "BGAConsumableWrapperItemDefinition.h"
#include "EFortItemType.h"

UBGAConsumableWrapperItemDefinition::UBGAConsumableWrapperItemDefinition() {
    this->ItemType = EFortItemType::BGAConsumableWrapper;
    this->bNeverPersisted = true;
}


