#include "CobaltPlayerComponent.h"
#include "Net/UnrealNetwork.h"

UCobaltPlayerComponent::UCobaltPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UCobaltPlayerComponent::OnRep_CachedMutator() {
}

void UCobaltPlayerComponent::OnPlayerPawnLoaded(AFortPlayerController* PlayerController) {
}

void UCobaltPlayerComponent::OnPawnLanded(const FHitResult& Hit) {
}

void UCobaltPlayerComponent::OnPawnEnterWater(AFortPlayerPawn* Pawn) {
}

void UCobaltPlayerComponent::ClientOnPawnKilled(AFortPlayerStateAthena* Victim) {
}

void UCobaltPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCobaltPlayerComponent, CachedMutator);
}


