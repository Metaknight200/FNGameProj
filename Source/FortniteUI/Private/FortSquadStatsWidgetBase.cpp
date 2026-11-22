#include "FortSquadStatsWidgetBase.h"

UFortSquadStatsWidgetBase::UFortSquadStatsWidgetBase() {
    this->DetailedStats = NULL;
}

void UFortSquadStatsWidgetBase::RequestStatsUpdate() {
}

void UFortSquadStatsWidgetBase::RequestShowPreviewStats() {
}



FUniqueNetIdRepl UFortSquadStatsWidgetBase::GetLocalPlayerId() const {
    return FUniqueNetIdRepl{};
}


