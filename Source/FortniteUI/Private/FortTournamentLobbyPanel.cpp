#include "FortTournamentLobbyPanel.h"

UFortTournamentLobbyPanel::UFortTournamentLobbyPanel() {
    this->Button_EventDetails = NULL;
    this->TournamentModalClass = NULL;
    this->Text_TimeRemainingScheduledMatch = NULL;
    this->Text_ScheduledMatchInfo = NULL;
}

bool UFortTournamentLobbyPanel::UsesScheduledMatchmaking() const {
    return false;
}


