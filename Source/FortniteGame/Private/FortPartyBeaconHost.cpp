#include "FortPartyBeaconHost.h"
#include "FortPartyBeaconClient.h"

AFortPartyBeaconHost::AFortPartyBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("FortPartyBeaconClient");
    this->ClientBeaconActorClass = AFortPartyBeaconClient::StaticClass();
    this->bUseSquadMappingOverride = false;
}


