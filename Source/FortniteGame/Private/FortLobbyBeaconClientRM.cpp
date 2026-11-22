#include "FortLobbyBeaconClientRM.h"

AFortLobbyBeaconClientRM::AFortLobbyBeaconClientRM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AFortLobbyBeaconClientRM::UpdateNewlyJoinedPlayer() {
}

void AFortLobbyBeaconClientRM::SetLocalReadyStatus(bool bIsReady) {
}

void AFortLobbyBeaconClientRM::ServerUpdateReadyStatus_Implementation(bool bIsReady) {
}
bool AFortLobbyBeaconClientRM::ServerUpdateReadyStatus_Validate(bool bIsReady) {
    return true;
}

void AFortLobbyBeaconClientRM::ServerUpdateNewlyJoinedPlayerInternal_Implementation() {
}
bool AFortLobbyBeaconClientRM::ServerUpdateNewlyJoinedPlayerInternal_Validate() {
    return true;
}

void AFortLobbyBeaconClientRM::ClientBroadcastLobbyPlayerPadTop_Implementation(const FUniqueNetIdRepl& ReadiedPlayer, bool bIsReadiedUp) const {
}


