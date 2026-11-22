#include "FortAthenaAIBotEvaluator_MeleeAttack.h"

UFortAthenaAIBotEvaluator_MeleeAttack::UFortAthenaAIBotEvaluator_MeleeAttack() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_MeleeAttack_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_MeleeAttack_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Attack_MoveToDestination");
    this->WeaponTriggerMeleeName = TEXT("AIEvaluator_WeaponTriggerMelee_ExecutionStatus");
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->bPrioritizeMovingTowardsThreatOverCurrentTarget = false;
    this->AttackingSkillSet = NULL;
    this->BlacklistReachingTarget = NULL;
}


