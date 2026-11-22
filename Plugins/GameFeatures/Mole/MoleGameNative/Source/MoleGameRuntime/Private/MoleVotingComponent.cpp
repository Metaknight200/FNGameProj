#include "MoleVotingComponent.h"
#include "Net/UnrealNetwork.h"

UMoleVotingComponent::UMoleVotingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VotingInputComp = NULL;
    this->bVoteCasted = false;
    this->BestVotingTarget = NULL;
}

void UMoleVotingComponent::ServerVote_Implementation() {
}

void UMoleVotingComponent::ServerSkipVote_Implementation() {
}

void UMoleVotingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleVotingComponent, bVoteCasted);
}


