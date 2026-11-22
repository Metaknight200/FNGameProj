#include "MoleVotingState_VoteCasting.h"
#include "Net/UnrealNetwork.h"

UMoleVotingState_VoteCasting::UMoleVotingState_VoteCasting() {
    this->bReplicates = true;
    this->VotingAbility = NULL;
    this->VotingComponentClass = NULL;
    this->ServerFinishTime = 0.00f;
}

void UMoleVotingState_VoteCasting::OnRep_ServerFinishTime() {
}

void UMoleVotingState_VoteCasting::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleVotingState_VoteCasting, ServerFinishTime);
}


