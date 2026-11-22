#include "FortBattleLabDeviceItemDefinition.h"
#include "EFortItemType.h"

UFortBattleLabDeviceItemDefinition::UFortBattleLabDeviceItemDefinition() {
    this->ItemType = EFortItemType::BattleLabDevice;
    this->bNeverPersisted = true;
}


