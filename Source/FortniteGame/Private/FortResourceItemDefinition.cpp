#include "FortResourceItemDefinition.h"
#include "EFortItemType.h"

UFortResourceItemDefinition::UFortResourceItemDefinition() {
    this->ItemType = EFortItemType::WorldResource;
    this->bAllowMultipleStacks = false;
    this->bInventorySizeLimited = false;
    this->bItemCanBeStolen = true;
    this->ResourceType = EFortResourceType::Wood;
    this->AccumulatingStatType = EFortReplicatedStat::None;
}


