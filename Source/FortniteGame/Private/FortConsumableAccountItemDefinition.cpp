#include "FortConsumableAccountItemDefinition.h"
#include "EFortItemType.h"

UFortConsumableAccountItemDefinition::UFortConsumableAccountItemDefinition() {
    this->ItemType = EFortItemType::ConsumableAccountItem;
    this->bAllowMultipleStacks = false;
    this->bCanActivateOnSelf = true;
    this->bCanActivateOnOthers = false;
    this->bIsAutomaticallyConsumed = false;
    this->ProfileType = EItemProfileType::Campaign;
}


