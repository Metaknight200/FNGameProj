#include "FortLobbyBeaconHostPvE.h"
#include "FortLobbyBeaconClientPvE.h"

AFortLobbyBeaconHostPvE::AFortLobbyBeaconHostPvE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("FortLobbyBeaconClientPvE");
    this->ClientBeaconActorClass = AFortLobbyBeaconClientPvE::StaticClass();
}


