#include "FortNeverPersistItemDefinition.h"
#include "EFortItemType.h"

UFortNeverPersistItemDefinition::UFortNeverPersistItemDefinition() {
    this->ItemType = EFortItemType::MissionItem;
    this->bNeverPersisted = true;
    this->bAllowMultipleStacks = false;
    this->bInventorySizeLimited = false;
    this->bItemCanBeStolen = true;
    this->bAccumulateOnPlayerState = false;
}


