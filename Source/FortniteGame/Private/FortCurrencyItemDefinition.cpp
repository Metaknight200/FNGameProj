#include "FortCurrencyItemDefinition.h"
#include "EFortItemType.h"

UFortCurrencyItemDefinition::UFortCurrencyItemDefinition() {
    this->ItemType = EFortItemType::Currency;
    this->bAllowMultipleStacks = false;
}


