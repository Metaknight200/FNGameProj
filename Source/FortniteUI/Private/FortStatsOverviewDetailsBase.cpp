#include "FortStatsOverviewDetailsBase.h"

UFortStatsOverviewDetailsBase::UFortStatsOverviewDetailsBase() {
    this->DetailedStats = NULL;
}

void UFortStatsOverviewDetailsBase::RequestStatsUpdate() {
}

void UFortStatsOverviewDetailsBase::ListenForChanges(bool bListen) {
}

FUniqueNetIdRepl UFortStatsOverviewDetailsBase::GetLocalPlayerId() const {
    return FUniqueNetIdRepl{};
}


