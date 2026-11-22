#include "FortQueryTest_GoalType.h"

UFortQueryTest_GoalType::UFortQueryTest_GoalType() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bScoreEnemies = false;
}


