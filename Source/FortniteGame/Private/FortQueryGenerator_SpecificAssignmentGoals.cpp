#include "FortQueryGenerator_SpecificAssignmentGoals.h"
#include "FortQueryItemType_Goal.h"

UFortQueryGenerator_SpecificAssignmentGoals::UFortQueryGenerator_SpecificAssignmentGoals() {
    this->ItemType = UFortQueryItemType_Goal::StaticClass();
    this->AssignmentSettings = NULL;
    this->GoalProvider = NULL;
}


