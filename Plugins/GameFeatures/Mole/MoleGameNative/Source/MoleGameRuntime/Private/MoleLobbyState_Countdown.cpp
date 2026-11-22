#include "MoleLobbyState_Countdown.h"
#include "Net/UnrealNetwork.h"

UMoleLobbyState_Countdown::UMoleLobbyState_Countdown() {
    this->bReplicates = true;
    this->LobbyTransitionServerTime = -1.00f;
}

void UMoleLobbyState_Countdown::OnRep_LobbyTransitionServerTime() {
}

void UMoleLobbyState_Countdown::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleLobbyState_Countdown, LobbyTransitionServerTime);
}


