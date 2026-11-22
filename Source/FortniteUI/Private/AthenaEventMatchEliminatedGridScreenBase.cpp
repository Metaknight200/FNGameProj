#include "AthenaEventMatchEliminatedGridScreenBase.h"

UAthenaEventMatchEliminatedGridScreenBase::UAthenaEventMatchEliminatedGridScreenBase() {
    this->TeamWidgetClass = NULL;
    this->MaxNumColumns = 0;
    this->MaxTeamCount = 0;
    this->MaxTeamSize = 0;
}


void UAthenaEventMatchEliminatedGridScreenBase::OnPlayerEliminatedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsEliminated) {
}


