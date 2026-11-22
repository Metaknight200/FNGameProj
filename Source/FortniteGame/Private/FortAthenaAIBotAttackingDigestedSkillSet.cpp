#include "FortAthenaAIBotAttackingDigestedSkillSet.h"

UFortAthenaAIBotAttackingDigestedSkillSet::UFortAthenaAIBotAttackingDigestedSkillSet() {
    this->MaxDistanceToEngageMeleeSq = 22500.00f;
    this->bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon = false;
    this->MaxDistanceToConsiderAsAnAlternateTargetSq = 2250000.00f;
    this->bEnableAlternateTargetRequiredTags = true;
    this->bEnableWTFBehavior = true;
    this->MinCooldownDelayBetweenMeleeAttackAttempts = 0.00f;
    this->MaxCooldownDelayBetweenMeleeAttackAttempts = 0.00f;
    this->MinThrowableCount = 1;
    this->MaxThrowableCount = 3;
    this->ThrowableCooldownMin = 7.50f;
    this->ThrowableCooldownMax = 12.50f;
    this->ThrowableMinimumRangeSquared = 1000000.00f;
    this->bThrowableEvaluatorActive = false;
}


