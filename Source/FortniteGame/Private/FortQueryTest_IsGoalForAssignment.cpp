#include "FortQueryTest_IsGoalForAssignment.h"

UFortQueryTest_IsGoalForAssignment::UFortQueryTest_IsGoalForAssignment() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bRetrieveRootAssignmentFromOwner = true;
}


