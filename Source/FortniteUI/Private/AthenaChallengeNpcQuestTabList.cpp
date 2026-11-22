#include "AthenaChallengeNpcQuestTabList.h"

UAthenaChallengeNpcQuestTabList::UAthenaChallengeNpcQuestTabList() {
    this->TabList_ChallengeCategories = NULL;
    this->Text_TabName = NULL;
    this->TabButtonClass = NULL;
    this->DefaultTabDisplayAsset = NULL;
}

void UAthenaChallengeNpcQuestTabList::HandleTransientQuestStarted(const UFortQuestItem* QuestItem, const UFortQuestItemDefinition* PreceedingQuestDef) {
}

void UAthenaChallengeNpcQuestTabList::HandleTransientQuestRemoved(const UFortQuestItem* QuestItem) {
}

void UAthenaChallengeNpcQuestTabList::HandleTabSelected(FName TabNameID) {
}

void UAthenaChallengeNpcQuestTabList::HandleTabButtonCreated(FName TabId, UCommonButtonBase* TabButton) {
}

void UAthenaChallengeNpcQuestTabList::HandleNewContextualObjectives(const TArray<UFortQuestItem*>& ContextualQuests) {
}

void UAthenaChallengeNpcQuestTabList::HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate) {
}


