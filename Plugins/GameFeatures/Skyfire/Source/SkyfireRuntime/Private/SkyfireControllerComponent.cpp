#include "SkyfireControllerComponent.h"
#include "Net/UnrealNetwork.h"

USkyfireControllerComponent::USkyfireControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CachedTODOverrideActor = NULL;
    this->CachedSkyfireMutator = NULL;
}

void USkyfireControllerComponent::OnViewTargetInMothershipChanged(const bool bInMothership) {
}

void USkyfireControllerComponent::OnRep_SquadMemberStatusData(TArray<FSkyfireSquadMemberStatusData> OldValues) {
}

void USkyfireControllerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USkyfireControllerComponent, SquadMemberStatusData);
}


