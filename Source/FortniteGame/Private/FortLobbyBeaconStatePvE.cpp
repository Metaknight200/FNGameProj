#include "FortLobbyBeaconStatePvE.h"
#include "FortLobbyBeaconPlayerStatePvE.h"

AFortLobbyBeaconStatePvE::AFortLobbyBeaconStatePvE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyBeaconPlayerStateClass = AFortLobbyBeaconPlayerStatePvE::StaticClass();
}


