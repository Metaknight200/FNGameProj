#include "FortEventDependentItemDefinition.h"
#include "EFortItemType.h"

UFortEventDependentItemDefinition::UFortEventDependentItemDefinition() {
    this->ItemType = EFortItemType::EventDependentItem;
    this->TargetReplacementItem = NULL;
}


