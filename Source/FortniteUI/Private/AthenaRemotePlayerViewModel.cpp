#include "AthenaRemotePlayerViewModel.h"

UAthenaRemotePlayerViewModel::UAthenaRemotePlayerViewModel() {
    this->PlayerController = NULL;
}

void UAthenaRemotePlayerViewModel::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}


