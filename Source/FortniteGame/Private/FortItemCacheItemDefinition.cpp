#include "FortItemCacheItemDefinition.h"
#include "EFortItemType.h"

UFortItemCacheItemDefinition::UFortItemCacheItemDefinition() {
    this->ItemType = EFortItemType::ItemCache;
    this->bInventorySizeLimited = false;
    this->bCanAutoEquipByClass = false;
    this->bSupportsQuickbarFocus = false;
    this->bShouldActivateWhenFocused = false;
    this->bCanBeDropped = false;
    this->bCanBeDepositedInStorageVault = false;
}


