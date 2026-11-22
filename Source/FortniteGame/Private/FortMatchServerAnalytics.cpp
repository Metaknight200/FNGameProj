#include "FortMatchServerAnalytics.h"

UFortMatchServerAnalytics::UFortMatchServerAnalytics() {
    this->PlayersNotCompletingPhasePercentage = 0.10f;
    this->PlayersDisconnectingUnexpectedlyPercentage = 0.10f;
    this->MatchStartThreshold = 60.00f;
}


