#include "FortQueryTest_HotspotSlotOrientation.h"

UFortQueryTest_HotspotSlotOrientation::UFortQueryTest_HotspotSlotOrientation() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->FaceToward = NULL;
}


