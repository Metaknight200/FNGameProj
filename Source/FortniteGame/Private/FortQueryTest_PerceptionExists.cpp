#include "FortQueryTest_PerceptionExists.h"
#include "Perception/AISense_Sight.h"

UFortQueryTest_PerceptionExists::UFortQueryTest_PerceptionExists() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Sense = ECorePerceptionTypes::Sight;
    this->SenseClass = UAISense_Sight::StaticClass();
}


