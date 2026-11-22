#include "UtilityContribution.h"

FUtilityContribution::FUtilityContribution() {
    this->MaxContribution = 0.00f;
    this->ContributingFactor = EFortCombatFactors::PlayerDamageThreat;
    this->ContributingAIDirectorFactor = EFortAIDirectorFactor::PlayerDamageThreat;
    this->ContributionType = EFortFactorContributionType::CurrentValue_Direct;
}

