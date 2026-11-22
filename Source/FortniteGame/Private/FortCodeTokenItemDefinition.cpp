#include "FortCodeTokenItemDefinition.h"
#include "EFortItemType.h"

UFortCodeTokenItemDefinition::UFortCodeTokenItemDefinition() {
    this->ItemType = EFortItemType::CodeToken;
    this->bAllowMultipleStacks = false;
    this->AllowedPlatforms.AddDefaulted(2);
    this->ProfileType = EItemProfileType::Common;
}


