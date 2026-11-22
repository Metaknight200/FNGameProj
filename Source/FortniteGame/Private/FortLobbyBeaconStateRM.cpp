#include "FortLobbyBeaconStateRM.h"
#include "FortLobbyBeaconPlayerStateRM.h"
#include "Net/UnrealNetwork.h"

AFortLobbyBeaconStateRM::AFortLobbyBeaconStateRM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyBeaconPlayerStateClass = AFortLobbyBeaconPlayerStateRM::StaticClass();
    this->LobbyTimeRemaining = 300;
}

void AFortLobbyBeaconStateRM::OnRep_LobbyTimeRemaining() {
}

void AFortLobbyBeaconStateRM::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLobbyBeaconStateRM, LobbyTimeRemaining);
}


