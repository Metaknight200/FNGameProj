#include "FortQueryTest_InsideWater.h"

UFortQueryTest_InsideWater::UFortQueryTest_InsideWater() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TestRadius = 128.00f;
}


