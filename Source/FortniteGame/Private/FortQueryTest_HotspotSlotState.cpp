#include "FortQueryTest_HotspotSlotState.h"

UFortQueryTest_HotspotSlotState::UFortQueryTest_HotspotSlotState() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->SlotState = EAIHotSpotSlot::Free;
}


