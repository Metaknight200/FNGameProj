#include "FortGiftBoxUnlockItemDefinition.h"
#include "EFortItemType.h"

UFortGiftBoxUnlockItemDefinition::UFortGiftBoxUnlockItemDefinition() {
    this->ItemType = EFortItemType::GiftBoxUnlock;
    this->GrantToProfileType = TEXT("common_core");
}


