#include "FortAthenaAIBotEvaluator_PathExists.h"

UFortAthenaAIBotEvaluator_PathExists::UFortAthenaAIBotEvaluator_PathExists() {
    this->PathExistsKeyName = TEXT("AIEvaluator_PathExists");
    this->AcceptableRadius = 5.00f;
    this->FilterClass = NULL;
    this->PathQueryType = EPathTestQueryType::RegularPathFinding;
    this->bAllowPartialPath = true;
    this->bProjectGoalLocation = true;
    this->bReachTestIncludesAgentRadius = true;
    this->bReachTestIncludesGoalRadius = true;
}


