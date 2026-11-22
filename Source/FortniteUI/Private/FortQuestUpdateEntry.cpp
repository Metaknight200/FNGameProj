#include "FortQuestUpdateEntry.h"

UFortQuestUpdateEntry::UFortQuestUpdateEntry() {
    this->ObjectivesBox = NULL;
    this->NumberOfObjectivesToDisplayAtTheSameTime = 1;
    this->NumberOfWidgetsToPreCreateWhenDisplayingAllObjectives = 1;
    this->QuestItem = NULL;
    this->SubEntryClass = NULL;
}




void UFortQuestUpdateEntry::SetQuestItem(const UFortQuestObjectiveInfo* ObjectiveInfo, bool bIsAnnouncement) {
}


int32 UFortQuestUpdateEntry::GetNumDisplayedObjectives() {
    return 0;
}

void UFortQuestUpdateEntry::FinishQuestOutro() {
}

void UFortQuestUpdateEntry::FinishQuestIntro() {
}

void UFortQuestUpdateEntry::CurrentlyDisplayedObjectiveFinished(UFortQuestObjectiveEntry* QuestObjective) {
}

bool UFortQuestUpdateEntry::CanAddObjective(UFortQuestItem* QuestItemToCheck) {
    return false;
}


