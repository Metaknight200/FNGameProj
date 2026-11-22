#include "FortSpectatorBeaconHost.h"
#include "FortSpectatorBeaconClient.h"

AFortSpectatorBeaconHost::AFortSpectatorBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("FortSpectatorBeaconClient");
    this->ClientBeaconActorClass = AFortSpectatorBeaconClient::StaticClass();
}


