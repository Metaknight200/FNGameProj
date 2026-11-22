#include "FortCreativePersistenceComponent.h"

UFortCreativePersistenceComponent::UFortCreativePersistenceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UFortCreativePersistenceComponent::StorePlayerRelatedData(APlayerState* PlayerState, const AFortMinigame* Minigame) {
    return false;
}

void UFortCreativePersistenceComponent::StoreAllMinigamePlayersData(const AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::RemovePendingToApplyData(AFortPlayerState* FortPlayerState, bool bShowsLog) {
}

void UFortCreativePersistenceComponent::OnPlayerPawnFinishedTeleported(AFortPlayerPawn* FortPlayerPawn) {
}

void UFortCreativePersistenceComponent::LoadPlayersDataNeededBeforeSpawn(AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayersDataNeededAfterSpawn(AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayerRelatedData(APlayerState* PlayerState, AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayerDataNeededBeforeSpawn(AFortPlayerState* FortPlayerState, AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayerDataNeededAfterSpawn(AFortPlayerState* FortPlayerState, AFortMinigame* Minigame) {
}

float UFortCreativePersistenceComponent::GetAutoSaveInterval() {
    return 0.0f;
}

void UFortCreativePersistenceComponent::ClearPlayerSpecificData(APlayerState* PlayerState, AFortMinigame* Minigame) const {
}

void UFortCreativePersistenceComponent::ClearPlayerRelatedData(APlayerState* PlayerState, AFortMinigame* Minigame) const {
}

void UFortCreativePersistenceComponent::ClearAllPlayersSpecificData(AFortMinigame* Minigame) {
}


