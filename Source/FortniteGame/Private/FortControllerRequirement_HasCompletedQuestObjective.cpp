#include "FortControllerRequirement_HasCompletedQuestObjective.h"

UFortControllerRequirement_HasCompletedQuestObjective::UFortControllerRequirement_HasCompletedQuestObjective() {
    this->bResolveQuestDetailsFromServiceProvider = false;
}

TArray<FName> UFortControllerRequirement_HasCompletedQuestObjective::Editor_GetValidObjectives() const {
    return TArray<FName>();
}


