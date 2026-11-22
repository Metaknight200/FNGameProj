#include "FortLobbyBeaconHost.h"
#include "FortLobbyBeaconClient.h"

AFortLobbyBeaconHost::AFortLobbyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClientBeaconActorClass = AFortLobbyBeaconClient::StaticClass();
    this->bAllowReservationsToProceedToLobby = false;
    this->bWorldRecordLoaded = false;
    this->LastReservationCountForPermissionTimeoutChange = 0;
    this->LobbyPermissionTimeout = 0.00f;
}


