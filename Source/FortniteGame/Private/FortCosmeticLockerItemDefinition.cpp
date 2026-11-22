#include "FortCosmeticLockerItemDefinition.h"
#include "EFortItemType.h"

UFortCosmeticLockerItemDefinition::UFortCosmeticLockerItemDefinition() {
    this->ItemType = EFortItemType::CosmeticLocker;
    this->bAllowMultipleStacks = false;
    this->bAutoBalanceStacks = false;
    this->GrantToProfileType = TEXT("athena");
}


