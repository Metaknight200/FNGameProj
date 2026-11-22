#include "PartyMemberLobbyState.h"

FPartyMemberLobbyState::FPartyMemberLobbyState() {
    this->InGameReadyCheckStatus = EFortPartyMemberReadyCheckStatus::None;
    this->GameReadiness = EGameReadiness::NotReady;
    this->ReadyInputType = ECommonInputType::MouseAndKeyboard;
    this->CurrentInputType = ECommonInputType::MouseAndKeyboard;
    this->HiddenMatchmakingDelayMax = 0;
    this->HasPreloadedAthena = false;
}

