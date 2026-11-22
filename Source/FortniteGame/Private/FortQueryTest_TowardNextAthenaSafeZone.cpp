#include "FortQueryTest_TowardNextAthenaSafeZone.h"

UFortQueryTest_TowardNextAthenaSafeZone::UFortQueryTest_TowardNextAthenaSafeZone() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bCheckAcceptanceAngleTowardNextCenter = false;
    this->AcceptanceAngleTowardNextCenter = 90.00f;
}


