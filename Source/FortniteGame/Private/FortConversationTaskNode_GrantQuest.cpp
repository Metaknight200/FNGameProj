#include "FortConversationTaskNode_GrantQuest.h"

UFortConversationTaskNode_GrantQuest::UFortConversationTaskNode_GrantQuest() {
    this->NodeType = TEXT("GrantQuest");
    this->bShouldOverrideSpeakerText = true;
    this->bShouldDisplayQuestProviderImage = false;
    this->bSharedQuestLimitsEnforced = true;
}


