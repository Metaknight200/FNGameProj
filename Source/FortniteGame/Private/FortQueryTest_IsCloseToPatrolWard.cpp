#include "FortQueryTest_IsCloseToPatrolWard.h"

UFortQueryTest_IsCloseToPatrolWard::UFortQueryTest_IsCloseToPatrolWard() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->WardEffectTypeFilter = EWardAffectType::AffectsBothStartAndEndPoints;
}


