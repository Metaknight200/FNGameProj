#include "BodyguardPlayerComponent.h"
#include "Net/UnrealNetwork.h"

UBodyguardPlayerComponent::UBodyguardPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReviving = false;
    this->BodyguardRole = EBodyguardPlayerRole::Bodyguard;
    this->ManagingMutator = NULL;
    this->bEnableSkinSwapping = true;
}

void UBodyguardPlayerComponent::SetIsBodyguardTooFarFromVIP(const bool bValue) {
}

void UBodyguardPlayerComponent::OnRep_BodyguardRole() {
}

void UBodyguardPlayerComponent::OnPlayerRevived(const AController* EventInstigator) {
}

void UBodyguardPlayerComponent::OnPlacementSet(AFortPlayerStateAthena* Sender, int32 NewPlace) {
}

void UBodyguardPlayerComponent::OnPawnStartedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting) {
}

void UBodyguardPlayerComponent::OnFortPCPawnChangedEvent(AFortPawn* NewPawn) {
}

void UBodyguardPlayerComponent::OnEmoteMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

bool UBodyguardPlayerComponent::IsSkinSwappingEnabled() const {
    return false;
}

void UBodyguardPlayerComponent::ClientPlayerEliminatedVIP_Implementation() {
}

void UBodyguardPlayerComponent::ClientOnVIPHasBeenReassigned_Implementation(const AFortPlayerStateAthena* NewVIPlayerState) {
}

void UBodyguardPlayerComponent::ClientOnTeamEliminated_Implementation() {
}

void UBodyguardPlayerComponent::ClientOnNotifyVIPTeammateIsDowned_Implementation() {
}

void UBodyguardPlayerComponent::ClientOnLocalSquadVIPTookDamage_Implementation() {
}

void UBodyguardPlayerComponent::ClientOnBodyguardIsTooFarFromVIP_Implementation() {
}

void UBodyguardPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBodyguardPlayerComponent, bIsReviving);
    DOREPLIFETIME(UBodyguardPlayerComponent, BodyguardRole);
    DOREPLIFETIME(UBodyguardPlayerComponent, bEnableSkinSwapping);
}


