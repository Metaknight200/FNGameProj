#include "FortQueryTest_HasNearbyBuildings.h"

UFortQueryTest_HasNearbyBuildings::UFortQueryTest_HasNearbyBuildings() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bIncludeCenter = true;
    this->bIncludeFloors = true;
    this->bIncludeFloorsAbove = true;
    this->bIncludeWalls = true;
    this->ExtentXY = 2;
    this->ExtentZ = 1;
}


