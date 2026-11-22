#include "UtilityData.h"

FUtilityData::FUtilityData() {
    // Initialize reflected value fields omitted by the dump.
    this->DebugGraphColor = FLinearColor::Transparent;
    this->ContributionsTotal = 0.00f;
    this->bApplyRecentSelectionPenalty = false;
    this->RecentlySelectedPenaltyPercentage = 0.00f;
    this->PenaltyFallOffRate = 0.00f;
}

