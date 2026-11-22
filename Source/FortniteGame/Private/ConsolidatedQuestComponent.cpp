#include "ConsolidatedQuestComponent.h"

UConsolidatedQuestComponent::UConsolidatedQuestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestItemDefinition = NULL;
    this->ComponentResponse = EQuestVisibilityResponse::Hide;
    this->UpdateType = EQuestUpdateType::ObjectiveCompleted;
    this->bIsInteractable = false;
}

void UConsolidatedQuestComponent::UpdateCompletedForPlayer(AFortPlayerController* InPlayerController, bool bCompleted) {
}

void UConsolidatedQuestComponent::OnQuestActivated(const UFortQuestItem* QuestItem, FName ObjectiveName) {
}

void UConsolidatedQuestComponent::OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags) {
}

void UConsolidatedQuestComponent::OnCalendarUpdated() {
}

bool UConsolidatedQuestComponent::IsInteractable(AFortPlayerController* InteractingController) {
    return false;
}

UFortQuestItemDefinition* UConsolidatedQuestComponent::GetQuestItemDefinition() const {
    return QuestItemDefinition;
}

TArray<FName> UConsolidatedQuestComponent::Editor_GetValidObjectives() const {
    return TArray<FName>();
}


