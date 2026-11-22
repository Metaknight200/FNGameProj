#include "FortTeamMemberEntryBase.h"

UFortTeamMemberEntryBase::UFortTeamMemberEntryBase() {
}



bool UFortTeamMemberEntryBase::IsCurrentMemberValid() const {
    return false;
}

bool UFortTeamMemberEntryBase::IsCurrentMemberLocal() const {
    return false;
}

bool UFortTeamMemberEntryBase::IsCurrentMemberInFrontend() const {
    return false;
}

EGameReadiness UFortTeamMemberEntryBase::GetCurrentMemberGameReadiness() const {
    return EGameReadiness::NotReady;
}



