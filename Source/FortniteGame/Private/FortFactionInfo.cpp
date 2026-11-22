#include "FortFactionInfo.h"

FFortFactionInfo::FFortFactionInfo() {
    this->DefaultAttitude = EFortFactionAttitude::Friendly;
    this->bHasSpecificRelations = false;
    this->bAreFactionMemberAllies = false;
    this->bShouldSpecificRelationsApplyToEntireFaction = false;
    this->bMembersCanResetSpecificRelation = false;
    this->ResetSpecificRelationUnawareDelay = 0.00f;
    this->ResetSpecificRelationNoDamageDelay = 0.00f;
}

