#include "FortQueryTest_CanHitWithGameplayAbility.h"

UFortQueryTest_CanHitWithGameplayAbility::UFortQueryTest_CanHitWithGameplayAbility() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->AIsUsingAbility = NULL;
    this->AbilityTargets = NULL;
}


