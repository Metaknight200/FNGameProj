#include "FortAthenaAIBotEvaluator_RangeAttack.h"

UFortAthenaAIBotEvaluator_RangeAttack::UFortAthenaAIBotEvaluator_RangeAttack() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_RangeAttack_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_RangeAttack_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Attack_Destination");
    this->WeaponReloadName = TEXT("AIEvaluator_WeaponReload_ExecutionStatus");
    this->WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    this->WeaponTargetingName = TEXT("AIEvaluator_WeaponTargeting_ExecutionStatus");
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->AggressivenessName = TEXT("AIEvaluator_Global_Aggressiveness");
    this->HasLoSOnThreatName = TEXT("AIEvaluator_Global_HasLoSOnThreat");
    this->CacheRangeAttackDigestedSkillSet = NULL;
    this->CacheAimingDigestedSkillSet = NULL;
    this->CachePerceptionDigestedSkillSet = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
    this->CacheAttackingDigestedSkillSet = NULL;
    this->BlacklistReachingTarget = NULL;
}


