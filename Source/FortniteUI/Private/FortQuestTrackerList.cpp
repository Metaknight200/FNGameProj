#include "FortQuestTrackerList.h"

UFortQuestTrackerList::UFortQuestTrackerList() {
    this->bConfigureAsHUD = false;
    this->QuestList = NULL;
}

void UFortQuestTrackerList::HandleSizeEstimateChanged(UObject* ChangedElement) {
}

void UFortQuestTrackerList::HandleQuestsUpdated() {
}

void UFortQuestTrackerList::HandlePinnedQuestsChanged() {
}

void UFortQuestTrackerList::HandleHUDFinalObjectiveHidden(UFortQuestItem* QuestItem) {
}

TArray<UFortQuestItem*> UFortQuestTrackerList::GetVisibleQuestsToDisplay() {
    return TArray<UFortQuestItem*>();
}



