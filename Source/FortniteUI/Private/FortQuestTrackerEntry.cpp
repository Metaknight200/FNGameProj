#include "FortQuestTrackerEntry.h"

UFortQuestTrackerEntry::UFortQuestTrackerEntry() {
    this->QuestNameText = NULL;
    this->ObjectivesList = NULL;
    this->TrackedQuest = NULL;
    this->bConfigureAsHUD = false;
}


void UFortQuestTrackerEntry::HandleHUDObjectiveCompletion(UFortQuestObjectiveInfo* QuestObjective) {
}


