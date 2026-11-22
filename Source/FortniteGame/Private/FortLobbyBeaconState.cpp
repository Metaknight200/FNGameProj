#include "FortLobbyBeaconState.h"
#include "FortLobbyBeaconPlayerState.h"
#include "Net/UnrealNetwork.h"

AFortLobbyBeaconState::AFortLobbyBeaconState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyBeaconPlayerStateClass = AFortLobbyBeaconPlayerState::StaticClass();
    this->bIsLobbyTimerPaused = false;
    this->MatchmakingLevel = 0;
    this->CachedMissionGeneratorCDO = NULL;
    this->MissionGeneratorDetailsRequirement = ELobbyMissionGeneratorDetailsRequirement::Unknown;
    this->bWorldRecordLoaded = false;
}

void AFortLobbyBeaconState::OnRep_MissionGeneratorDetailsRequirement() {
}

void AFortLobbyBeaconState::OnRep_MissionGeneratorClassPath() {
}

void AFortLobbyBeaconState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLobbyBeaconState, MatchmakingLevel);
    DOREPLIFETIME(AFortLobbyBeaconState, MissionGeneratorClassPath);
    DOREPLIFETIME(AFortLobbyBeaconState, MissionGeneratorDetailsRequirement);
}


