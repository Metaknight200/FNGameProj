#include "FactionData.h"

FFactionData::FFactionData() {
    this->bActive = false;
    this->DefaultAttitude = EFortFactionAttitude::Friendly;
    this->bAreFactionMemberAllies = false;
    this->bShouldSpecificRelationsApplyToEntireFaction = false;
    this->bMembersCanResetSpecificRelation = false;
}

