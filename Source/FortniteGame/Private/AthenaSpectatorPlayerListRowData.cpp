#include "AthenaSpectatorPlayerListRowData.h"

UAthenaSpectatorPlayerListRowData::UAthenaSpectatorPlayerListRowData() {
    this->Rank = -1;
    this->TeamNumber = -1;
    this->PlayerName = TEXT("PlayerName");
    this->Kills = -1;
    this->IsRecordingPlayer = false;
    this->IsSpectatorTarget = false;
    this->PlayerState = NULL;
}

void UAthenaSpectatorPlayerListRowData::SetKills(AFortPlayerStateAthena* PS, int32 InKills) {
}

AFortPlayerStateAthena* UAthenaSpectatorPlayerListRowData::GetPlayerState() {
    return PlayerState;
}


