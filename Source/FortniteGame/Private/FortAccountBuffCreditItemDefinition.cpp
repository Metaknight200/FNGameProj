#include "FortAccountBuffCreditItemDefinition.h"
#include "EFortItemType.h"

UFortAccountBuffCreditItemDefinition::UFortAccountBuffCreditItemDefinition() {
    this->ItemType = EFortItemType::BuffCredit;
    this->bIsAutomaticallyConsumed = true;
    this->MinutesOfBuffTimeToGrant = 43200;
}


