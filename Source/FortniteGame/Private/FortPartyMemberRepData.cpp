#include "FortPartyMemberRepData.h"

FFortPartyMemberRepData::FFortPartyMemberRepData() {
    // Initialize reflected value fields omitted by the dump.
    this->UtcTimeStartedMatchAthena = FDateTime(0);
    this->Location = EFortPartyMemberLocation::PreLobby;
    this->NumAthenaPlayersLeft = 0;
    this->SpectateAPartyMemberAvailable = false;
    this->FeatDefinition = NULL;
    this->VoiceChatStatus = EPartyMemberVoiceChatStatus::Disabled;
    this->SidekickStatus = EPartyMemberSidekickStatus::None;
}

