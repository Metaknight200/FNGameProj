#include "FortQuestUpdatesLog.h"

UFortQuestUpdatesLog::UFortQuestUpdatesLog() {
    this->QuestEntryClass = NULL;
    this->MaxDisplayedQuestUpdates = 0;
    this->MaxDisplayedQuestObjectives = 0;
    this->bShowFeatQuests = false;
    this->bFeatShowNonVisibleObjectives = false;
    this->QuestUpdatesBox = NULL;
}

void UFortQuestUpdatesLog::HandleQuestUpdateFinished(UFortQuestUpdateEntry* QuestEntryFinished) {
}

void UFortQuestUpdatesLog::HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate) {
}



