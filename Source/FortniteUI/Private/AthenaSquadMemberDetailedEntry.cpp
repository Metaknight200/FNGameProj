#include "AthenaSquadMemberDetailedEntry.h"

UAthenaSquadMemberDetailedEntry::UAthenaSquadMemberDetailedEntry() {
    this->AvatarIcon_MemberAvatar = NULL;
    this->Text_ParticipationStatus = NULL;
}


FAthenaTeamDisplayInfo UAthenaSquadMemberDetailedEntry::GetSquadDisplayInfo() const {
    return FAthenaTeamDisplayInfo{};
}


