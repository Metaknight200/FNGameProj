#include "FortQueryTest_PointInBuildingFoundation.h"
#include "BuildingFoundation.h"

UFortQueryTest_PointInBuildingFoundation::UFortQueryTest_PointInBuildingFoundation() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->BuildingFoundationContext = NULL;
    this->BuildingFoundationClass = ABuildingFoundation::StaticClass();
}


