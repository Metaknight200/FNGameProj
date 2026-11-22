#include "FortMinigameLogicComponent.h"
#include "Net/UnrealNetwork.h"

UFortMinigameLogicComponent::UFortMinigameLogicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRelevantForMinigameInitialization = true;
    this->bAlwaysTryHandleDelayedStateChange = false;
    this->CurrentMinigame = NULL;
    this->CachedMinigame = NULL;
}

bool UFortMinigameLogicComponent::TryAttachToMinigame() {
    return false;
}

void UFortMinigameLogicComponent::RemoveMinigameTag(const FGameplayTag& Tag) {
}

void UFortMinigameLogicComponent::HandlePostMinigameStarted_Implementation() {
}

void UFortMinigameLogicComponent::HandlePlayspaceEditModeChange_Implementation(bool bInEditMode) {
}

void UFortMinigameLogicComponent::HandleMinigameStateChanged_Implementation(AFortMinigame* Minigame, EFortMinigameState NewMinigameState) {
}

void UFortMinigameLogicComponent::HandleMinigameStarted_Implementation() {
}

void UFortMinigameLogicComponent::HandleMinigameSet_Implementation() {
}

void UFortMinigameLogicComponent::HandleMinigameEnded_Implementation() {
}

void UFortMinigameLogicComponent::AddMinigameTag(const FGameplayTag& Tag) {
}

void UFortMinigameLogicComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameLogicComponent, MinigameTags);
    DOREPLIFETIME(UFortMinigameLogicComponent, CurrentMinigame);
}


