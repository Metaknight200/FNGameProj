#include "FortMedalsPunchCardItemDefinition.h"
#include "EFortItemType.h"

UFortMedalsPunchCardItemDefinition::UFortMedalsPunchCardItemDefinition() {
    this->ItemType = EFortItemType::MedalsPunchCard;
    this->NumPunches = 10;
    this->bAllowMedalReplacement = false;
}


