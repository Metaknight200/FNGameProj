#include "AthenaProfileStatsBase.h"

UAthenaProfileStatsBase::UAthenaProfileStatsBase() {
    this->ProfileStatBox = NULL;
    this->CurrentViewedStatSet = NULL;
    this->CurrentStatView = NULL;
}

void UAthenaProfileStatsBase::Setup(const FUniqueNetIdRepl& InUniqueId) {
}

void UAthenaProfileStatsBase::PrevStatSet() {
}



void UAthenaProfileStatsBase::OnProfileLoaded(UFortMcpProfileAthenaStats* ProfileAthenaStats) {
}



int32 UAthenaProfileStatsBase::NumStatSets() const {
    return 0;
}

void UAthenaProfileStatsBase::NextStatSet() {
}

void UAthenaProfileStatsBase::NextPlaylist() {
}

FUniqueNetIdRepl UAthenaProfileStatsBase::GetUniqueID() const {
    return FUniqueNetIdRepl{};
}

UAthenaSeasonStats* UAthenaProfileStatsBase::GetCurrentStatSet() const {
    return NULL;
}

FText UAthenaProfileStatsBase::GetCurrentPlaylistName() const {
    return FText::GetEmpty();
}


