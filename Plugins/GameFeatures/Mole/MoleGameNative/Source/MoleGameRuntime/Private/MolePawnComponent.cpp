#include "MolePawnComponent.h"
#include "Net/UnrealNetwork.h"

UMolePawnComponent::UMolePawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialOpacityParameter = TEXT("Ghost Phase Mask Amount");
    this->GhostMaterial = NULL;
    this->PlayerFootstepBankBase = NULL;
    this->PlayerFootstepBankPriority = 1000;
    this->BaseCustomizationData = NULL;
    this->GhostCustomizationData = NULL;
    this->bIsGhost = false;
    this->GhostCollisionProfile = TEXT("Spectator");
}

void UMolePawnComponent::OnRep_bIsGhost() {
}



void UMolePawnComponent::HandlePawnCustomizationComplete(AFortPlayerPawn* Pawn) {
}

void UMolePawnComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMolePawnComponent, bIsGhost);
}


