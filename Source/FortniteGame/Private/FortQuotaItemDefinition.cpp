#include "FortQuotaItemDefinition.h"
#include "EFortItemType.h"

UFortQuotaItemDefinition::UFortQuotaItemDefinition() {
    this->ItemType = EFortItemType::Quota;
    this->StartingValue = 0.00f;
    this->MaximumValue = 0;
    this->UnitsPerMinuteRechargeRate = 0.00f;
    this->RechargeDelayMinutes = 0;
}


