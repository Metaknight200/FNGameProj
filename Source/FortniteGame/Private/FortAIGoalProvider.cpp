#include "FortAIGoalProvider.h"

UFortAIGoalProvider::UFortAIGoalProvider() {
    this->World = NULL;
    this->AssignmentOwner = NULL;
    this->EncounterInfo = NULL;
}

void UFortAIGoalProvider::UpdateGoals() {
}

bool UFortAIGoalProvider::InitializeGoalProvider(UWorld* ContextWorld, UFortAIAssignment* Assignment) {
    return false;
}

UFortAIEncounterInfo* UFortAIGoalProvider::GetEncounterInfo() const {
    return NULL;
}


