#include "FortPlayerPerksItemDefinition.h"
#include "EFortItemType.h"

UFortPlayerPerksItemDefinition::UFortPlayerPerksItemDefinition() {
    this->ItemType = EFortItemType::PlayerTech;
    this->bAllowMultipleStacks = false;
    this->GrantToProfileType = TEXT("athena");
    this->XpCurve = NULL;
}


