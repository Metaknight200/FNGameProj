#include "AthenaRewardEventGraphCosmeticItemDefinition.h"
#include "EFortItemType.h"

UAthenaRewardEventGraphCosmeticItemDefinition::UAthenaRewardEventGraphCosmeticItemDefinition() {
    this->ItemType = EFortItemType::RegCosmeticDef;
    this->bNeverPersisted = true;
}


