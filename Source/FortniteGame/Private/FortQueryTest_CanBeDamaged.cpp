#include "FortQueryTest_CanBeDamaged.h"

UFortQueryTest_CanBeDamaged::UFortQueryTest_CanBeDamaged() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bScoreEnemies = false;
}


