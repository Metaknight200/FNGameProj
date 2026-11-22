#include "FortPartyRepData.h"

FFortPartyRepData::FFortPartyRepData() {
    // Initialize reflected value fields omitted by the dump.
    this->LFGTime = FDateTime(0);
    this->PartyState = EFortPartyState::Undetermined;
    this->LobbyConnectionStarted = false;
    this->MatchmakingResult = EMatchmakingCompleteResult::NotStarted;
    this->MatchmakingState = EMatchmakingState::NotMatchmaking;
    this->SessionIsCriticalMission = false;
    this->ZoneTileIndex = 0;
    this->AllowJoinInProgress = false;
    this->AthenaSquadFill = false;
    this->AthenaPrivateMatch = false;
    this->PartyIsJoinedInProgress = false;
}

