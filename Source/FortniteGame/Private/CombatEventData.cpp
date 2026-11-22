#include "CombatEventData.h"

FCombatEventData::FCombatEventData() {
    // Initialize reflected value fields omitted by the dump.
    this->DebugGraphColor = FLinearColor::Transparent;
    this->Heat = 0.00f;
    this->MaxHeatContribution = 0.00f;
    this->CoolDownRate = 0.00f;
    this->ContributionType = EFortCombatEventContribution::Linear;
}

