#include "FortGameSession.h"
#include "FortPartyBeaconHost.h"
#include "FortSpectatorBeaconHost.h"

AFortGameSession::AFortGameSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReservationBeaconHostClass = AFortPartyBeaconHost::StaticClass();
    this->SpectatorBeaconHostClass = AFortSpectatorBeaconHost::StaticClass();
    this->ReservationBeaconHost = NULL;
    this->LobbyBeaconHost = NULL;
    this->SpectatorBeaconHost = NULL;
    this->ContentBeaconHost = NULL;
    this->BulkUnregisterTimerDelay = 60.00f;
    this->MaxBroadcasters = 8;
    this->DisconnectedReservationTimeout = 300.00f;
    this->bShouldServerForcePartnerId = false;
    this->bEnableMeshNetwork = true;
    this->MeshBeaconHost = NULL;
    this->MeshBeaconHostObject = NULL;
    this->MeshBeaconClient = NULL;
    this->RetryMeshConnectDelay = 10.00f;
    this->MaxMeshConnectDelay = 120.00f;
    this->MeshNetworkServerStatusEventRate = 60.00f;
}

void AFortGameSession::DumpReservations() const {
}


