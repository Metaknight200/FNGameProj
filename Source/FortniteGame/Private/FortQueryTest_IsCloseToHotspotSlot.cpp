#include "FortQueryTest_IsCloseToHotspotSlot.h"

UFortQueryTest_IsCloseToHotspotSlot::UFortQueryTest_IsCloseToHotspotSlot() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->HotspotClass = NULL;
    this->bIgnoreItemsWithSlotData = true;
}


