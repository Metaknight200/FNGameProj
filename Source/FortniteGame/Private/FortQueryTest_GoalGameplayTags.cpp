#include "FortQueryTest_GoalGameplayTags.h"

UFortQueryTest_GoalGameplayTags::UFortQueryTest_GoalGameplayTags() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bShouldLookupQueryByTag = false;
    this->bShouldPassWhenQueryNotFound = true;
    this->bRequireAllProvidedTagQueriesPass = false;
}


