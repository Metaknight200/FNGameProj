#include "FortLobbyBeaconHostRM.h"
#include "FortLobbyBeaconClientRM.h"

AFortLobbyBeaconHostRM::AFortLobbyBeaconHostRM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("FortLobbyBeaconClientRM");
    this->ClientBeaconActorClass = AFortLobbyBeaconClientRM::StaticClass();
}


