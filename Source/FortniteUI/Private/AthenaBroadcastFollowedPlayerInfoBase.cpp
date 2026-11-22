#include "AthenaBroadcastFollowedPlayerInfoBase.h"

UAthenaBroadcastFollowedPlayerInfoBase::UAthenaBroadcastFollowedPlayerInfoBase() {
    this->PlayerWidget = NULL;
    this->HitPointBar_Health = NULL;
    this->HitPointBar_Shield = NULL;
    this->HitPointBar_Vehicle = NULL;
}



void UAthenaBroadcastFollowedPlayerInfoBase::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPlayerState) {
}



