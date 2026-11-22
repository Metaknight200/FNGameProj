#include "FortAccountItemDefinition.h"

UFortAccountItemDefinition::UFortAccountItemDefinition() {
    this->bIsAccountItem = true;
    this->MinLevel = 1;
    this->MaxLevel = 1;
    this->GrantToProfileType = TEXT("campaign");
}


