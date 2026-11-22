#include "FortCampaignTeamMemberEntry.h"

UFortCampaignTeamMemberEntry::UFortCampaignTeamMemberEntry() {
    this->RepresentedMemberIndex = -1;
    this->CurrentConnectionState = EFortMemberConnectionState::Invalid;
}


bool UFortCampaignTeamMemberEntry::HasTeamMembers() const {
    return false;
}


