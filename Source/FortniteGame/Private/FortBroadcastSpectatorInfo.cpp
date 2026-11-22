#include "FortBroadcastSpectatorInfo.h"
#include "Net/UnrealNetwork.h"

AFortBroadcastSpectatorInfo::AFortBroadcastSpectatorInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->TotalNumPlayers = 0;
    this->TotalNumTeams = 0;
}

void AFortBroadcastSpectatorInfo::OnRep_TotalNumTeams() {
}

void AFortBroadcastSpectatorInfo::OnRep_TotalNumPlayers() {
}

void AFortBroadcastSpectatorInfo::OnRep_PerPlayerInfo() {
}

void AFortBroadcastSpectatorInfo::HandleTeamInfosSet() {
}

void AFortBroadcastSpectatorInfo::HandlePlayerAdded(APlayerController* AddedPlayer) {
}

void AFortBroadcastSpectatorInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortBroadcastSpectatorInfo, TotalNumPlayers);
    DOREPLIFETIME(AFortBroadcastSpectatorInfo, TotalNumTeams);
    DOREPLIFETIME(AFortBroadcastSpectatorInfo, TeamPrivateInfos);
    DOREPLIFETIME(AFortBroadcastSpectatorInfo, PerPlayerInfo);
}


