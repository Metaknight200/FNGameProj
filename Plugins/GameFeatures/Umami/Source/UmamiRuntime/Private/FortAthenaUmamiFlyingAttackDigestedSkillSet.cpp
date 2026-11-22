#include "FortAthenaUmamiFlyingAttackDigestedSkillSet.h"

UFortAthenaUmamiFlyingAttackDigestedSkillSet::UFortAthenaUmamiFlyingAttackDigestedSkillSet() {
    this->bEnabled = true;
    this->OverriddenAttackDistance = -1.00f;
    this->OverriddenAttackDistanceAfterBeingInRange = -1.00f;
    this->MinimumZOffsetWithTarget = 1500.00f;
    this->EvasiveManeuverMinDotToKeepLoop = 0.75f;
    this->MoveInRangeBlacklistTime = 15.00f;
    this->EvadeBlacklistTime = 10.00f;
}


