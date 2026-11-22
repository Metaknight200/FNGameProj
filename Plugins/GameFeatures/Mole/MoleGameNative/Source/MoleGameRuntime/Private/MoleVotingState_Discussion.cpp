#include "MoleVotingState_Discussion.h"
#include "Net/UnrealNetwork.h"

UMoleVotingState_Discussion::UMoleVotingState_Discussion() {
    this->bReplicates = true;
    this->QuickChatComponentClass = NULL;
    this->DiscussionFinishServerTime = 0.00f;
}

void UMoleVotingState_Discussion::OnRep_DiscussionFinishServerTime() {
}

void UMoleVotingState_Discussion::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleVotingState_Discussion, DiscussionFinishServerTime);
}


