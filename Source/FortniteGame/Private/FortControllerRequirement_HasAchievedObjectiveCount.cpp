#include "FortControllerRequirement_HasAchievedObjectiveCount.h"

UFortControllerRequirement_HasAchievedObjectiveCount::UFortControllerRequirement_HasAchievedObjectiveCount() {
    this->bResolveQuestDetailsFromServiceProvider = false;
}

TArray<FName> UFortControllerRequirement_HasAchievedObjectiveCount::Editor_GetValidObjectives() const {
    return TArray<FName>();
}


