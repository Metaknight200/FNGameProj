#include "FortMinigameManager.h"

UFortMinigameManager::UFortMinigameManager() {
    this->PlayerController = NULL;
    this->CurrentMinigame = NULL;
}

void UFortMinigameManager::SendStatEventWithTags(EFortQuestObjectiveStatEvent Type, UObject* TargetObject, const FGameplayTagContainer& TargetTags, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& ContextTags, int32 Count) {
}

void UFortMinigameManager::GetSourceAndContextTags(FGameplayTagContainer& OutSourceTags, FGameplayTagContainer& OutContextTags) const {
}


