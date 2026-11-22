#include "FortAthenaAIBotEvaluator_ThrowableAttack.h"

UFortAthenaAIBotEvaluator_ThrowableAttack::UFortAthenaAIBotEvaluator_ThrowableAttack() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_ThrowableAttack_ExecutionStatus");
    this->WeaponTriggerThrowableName = TEXT("AIEvaluator_WeaponTriggerThrowable_ExecutionStatus");
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->AttackingSkillSet = NULL;
    this->RangeAttackSkillSet = NULL;
    this->AimingSkillSet = NULL;
    this->BestWeapon = NULL;
    this->CachedFortPawn = NULL;
}


