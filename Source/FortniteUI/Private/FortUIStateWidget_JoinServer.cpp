#include "FortUIStateWidget_JoinServer.h"

UFortUIStateWidget_JoinServer::UFortUIStateWidget_JoinServer() {
    this->Stack_MainContent = NULL;
    this->RejoinWindowClass = NULL;
}


void UFortUIStateWidget_JoinServer::HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState::Type> OldState, TEnumAsByte<EMatchmakingState::Type> NewState) {
}

void UFortUIStateWidget_JoinServer::HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult) {
}

void UFortUIStateWidget_JoinServer::HandleLobbyTimeUpdated(int32 TimeRemaining) {
}

void UFortUIStateWidget_JoinServer::HandleLobbyDisconnected() {
}


