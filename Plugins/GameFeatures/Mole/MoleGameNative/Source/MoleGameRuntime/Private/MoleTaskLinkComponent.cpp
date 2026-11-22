#include "MoleTaskLinkComponent.h"
#include "Net/UnrealNetwork.h"

UMoleTaskLinkComponent::UMoleTaskLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bTaskLinkDisabled = false;
}

void UMoleTaskLinkComponent::UpdatePlayerInteractionData(AController* User, const FName InteractionInfoRowName) {
}

void UMoleTaskLinkComponent::SendGenericObjectiveStatUpdate(AController* User, FGameplayTag ObjectiveStatTag, float ObjectiveStatDelta) {
}

void UMoleTaskLinkComponent::RemovePlayerPermission(AController* User) {
}

void UMoleTaskLinkComponent::RemovePlayerInteractionData(AController* User, bool bAlsoRemovePermission) {
}

void UMoleTaskLinkComponent::OnRep_bTaskLinkDisabled() {
}

void UMoleTaskLinkComponent::OnOwnerActorInteract(const AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> Interaction) {
}

bool UMoleTaskLinkComponent::IsTaskLinkDisabled() const {
    return bTaskLinkDisabled;
}

bool UMoleTaskLinkComponent::HasPlayerPermission(AController* User) const {
    return false;
}

void UMoleTaskLinkComponent::GivePlayerPermission(AController* User) {
}

FGameplayTag UMoleTaskLinkComponent::GetTaskTag() const {
    return FGameplayTag{};
}

UMoleTaskLinkComponent* UMoleTaskLinkComponent::GetTaskComponent(AActor* TaskActor) {
    return NULL;
}

float UMoleTaskLinkComponent::GetInteractionTime(const AFortPawn* InteractingPawn, const TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted) const {
    return 0.0f;
}

FText UMoleTaskLinkComponent::GetInteractionString(const AFortPawn* InteractingPawn, const TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted) const {
    return FText::GetEmpty();
}

void UMoleTaskLinkComponent::DisableTaskLink() {
}

bool UMoleTaskLinkComponent::CanInteract(const AFortPawn* InteractingPawn, const TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, const TEnumAsByte<TInteractionType> InteractionType) {
    return false;
}

void UMoleTaskLinkComponent::AddPlayerInteractionData(AController* User, const FName InteractionInfoRowName, bool bGivePermission) {
}

void UMoleTaskLinkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleTaskLinkComponent, PlayerTaskStateDataArray);
    DOREPLIFETIME(UMoleTaskLinkComponent, bTaskLinkDisabled);
}


