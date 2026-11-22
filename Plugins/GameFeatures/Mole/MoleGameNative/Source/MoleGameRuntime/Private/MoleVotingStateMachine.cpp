#include "MoleVotingStateMachine.h"
#include "Net/UnrealNetwork.h"

UMoleVotingStateMachine::UMoleVotingStateMachine() {
    this->bReplicates = true;
    this->bPubliclyBroadcast = true;
    this->PrepareStateDelayTime = 2.00f;
}

void UMoleVotingStateMachine::OnRep_VoteList() {
}

void UMoleVotingStateMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleVotingStateMachine, VoteList);
}


