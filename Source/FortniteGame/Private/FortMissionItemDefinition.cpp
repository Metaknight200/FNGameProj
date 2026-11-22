#include "FortMissionItemDefinition.h"
#include "EFortItemType.h"

UFortMissionItemDefinition::UFortMissionItemDefinition() {
    this->ItemType = EFortItemType::MissionItem;
    this->bSupportsQuickbarFocus = false;
    this->bCanBeDropped = false;
}


