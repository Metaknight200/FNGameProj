#include "FortMutatorListComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UFortMutatorListComponent::UFortMutatorListComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldMakeMutatorsDormant = false;
    this->InitState = EMutatorListInitState::Default;
    this->UserOptions = NULL;
}

void UFortMutatorListComponent::UnregisterMinigameMutators() {
}

void UFortMutatorListComponent::SetPropertyOverrides(const TMap<FString, FString>& Properties) {
}

void UFortMutatorListComponent::SetMutatorsActive(bool bActive) {
}

void UFortMutatorListComponent::ResolvePendingRepOverrides() {
}

bool UFortMutatorListComponent::RemovePropertyOverride(const FString& Property) {
    return false;
}

void UFortMutatorListComponent::RegisterMinigameMutators() {
}

void UFortMutatorListComponent::OnRep_PropertyOverrideArray() {
}

TMap<FString, FString> UFortMutatorListComponent::GetPropertyOverridesAsStrings() const {
    return TMap<FString, FString>();
}

AFortGameplayMutator* UFortMutatorListComponent::GetMutatorByClass(TSubclassOf<AFortGameplayMutator> MutatorClass) const {
    return NULL;
}

void UFortMutatorListComponent::AddOrUpdatePropertyOverrides(const TMap<FString, FString>& Properties) {
}

void UFortMutatorListComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMutatorListComponent, PropertyOverrideArray);
}


