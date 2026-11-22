#include "FortPrerollDataItemDefinition.h"
#include "EFortItemType.h"

UFortPrerollDataItemDefinition::UFortPrerollDataItemDefinition() {
    this->ItemType = EFortItemType::PrerollData;
    this->StreakbreakerRefundMultiplier = 0.50f;
    this->StreakbreakerAccumulationMultiplier = 0.75f;
}


