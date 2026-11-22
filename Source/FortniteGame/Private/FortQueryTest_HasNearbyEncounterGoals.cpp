#include "FortQueryTest_HasNearbyEncounterGoals.h"

UFortQueryTest_HasNearbyEncounterGoals::UFortQueryTest_HasNearbyEncounterGoals() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bOnlyActiveEncounters = true;
}


