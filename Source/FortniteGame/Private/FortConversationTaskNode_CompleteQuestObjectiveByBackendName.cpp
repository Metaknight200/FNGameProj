#include "FortConversationTaskNode_CompleteQuestObjectiveByBackendName.h"

UFortConversationTaskNode_CompleteQuestObjectiveByBackendName::UFortConversationTaskNode_CompleteQuestObjectiveByBackendName() {
    this->bResolveQuestDetailsFromServiceProvider = false;
}

TArray<FName> UFortConversationTaskNode_CompleteQuestObjectiveByBackendName::Editor_GetValidObjectives() const {
    return TArray<FName>();
}


