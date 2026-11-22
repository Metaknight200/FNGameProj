#include "MoleVotingState_ResultDisplay.h"
#include "Net/UnrealNetwork.h"

UMoleVotingState_ResultDisplay::UMoleVotingState_ResultDisplay() {
    this->bReplicates = true;
}

void UMoleVotingState_ResultDisplay::OnRep_VotingResolutionData() {
}

void UMoleVotingState_ResultDisplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleVotingState_ResultDisplay, VotingResolutionData);
}


