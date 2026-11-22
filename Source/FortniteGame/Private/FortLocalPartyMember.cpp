#include "FortLocalPartyMember.h"

UFortLocalPartyMember::UFortLocalPartyMember() {
    this->NumAthenaPlayersLeftDeltaThreshold = 5;
    this->AthenaPlayersLeftUpdateDelay = 5.00f;
}

void UFortLocalPartyMember::HandlePlayerControllerSet() {
}

void UFortLocalPartyMember::HandleNumAthenaPlayersLeftChanged(int32 NumPlayersLeft) {
}

void UFortLocalPartyMember::HandleMcpProfilesInitialized() {
}


