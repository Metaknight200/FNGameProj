#include "FortWorldMultiItemDefinition.h"
#include "EFortItemType.h"

UFortWorldMultiItemDefinition::UFortWorldMultiItemDefinition() {
    this->PrimaryAssetIdItemTypeOverride = EFortItemType::MultiItem;
    this->bSwitchItemOnTimer = true;
    this->bSwitchItemAfterFiringEnds = true;
    this->bSwitchItemInSequenceByPoweringUp = false;
    this->bPreventSwitchingWhileFiring = true;
    this->bPreventSwitchingWhileCharging = true;
    this->bPreventSwitchingWhileReloading = true;
    this->bPreventSwitchingWhileAiming = false;
    this->bPreventSwitchingWhileHidden = true;
    this->TimeBetweenSwitchingItems = 8.00f;
    this->TellDuration = 1.00f;
}


