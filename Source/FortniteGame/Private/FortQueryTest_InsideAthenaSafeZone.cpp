#include "FortQueryTest_InsideAthenaSafeZone.h"

UFortQueryTest_InsideAthenaSafeZone::UFortQueryTest_InsideAthenaSafeZone() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bUseCurrentSafeZoneIndicatorRadius = false;
    this->bNextSafeZone = false;
}


