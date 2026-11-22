#include "AthenaChallengeListEntry_NpcQuest.h"

UAthenaChallengeListEntry_NpcQuest::UAthenaChallengeListEntry_NpcQuest() {
    this->RichText_ChallengeDesc = NULL;
    this->RichText_ObjectivesCompletedSelected = NULL;
    this->RichText_ObjectivesCompletedUnselected = NULL;
    this->LazyImage_SourceIcon = NULL;
    this->RichText_SourceName = NULL;
    this->RichText_FlavorText = NULL;
    this->DateTimeText_TimeRemaining = NULL;
    this->UserWidget_Rewards = NULL;
    this->Text_QuestID = NULL;
}


bool UAthenaChallengeListEntry_NpcQuest::IsSelected() const {
    return false;
}

void UAthenaChallengeListEntry_NpcQuest::HandleQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate) {
}






