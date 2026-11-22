#include "FortTokenType.h"
#include "EFortItemType.h"

UFortTokenType::UFortTokenType() {
    this->ItemType = EFortItemType::Token;
    this->bAllowMultipleStacks = false;
    this->bPercentageRepresentation = false;
    this->ProfileType = EItemProfileType::Campaign;
}


