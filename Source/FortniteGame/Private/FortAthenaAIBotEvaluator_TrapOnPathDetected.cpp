#include "FortAthenaAIBotEvaluator_TrapOnPathDetected.h"

UFortAthenaAIBotEvaluator_TrapOnPathDetected::UFortAthenaAIBotEvaluator_TrapOnPathDetected() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_TrapOnPath_ExecutionStatus");
    this->CacheAimingDigestedSkillSet = NULL;
    this->TrapOnPathKeyName = TEXT("AIEvaluator_TrapOnPath_ExecutionStatus");
    this->TrapActorOnPathKeyName = TEXT("AIEvaluator_TrapOnPath_Actor");
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->AlertLevelName = TEXT("AIEvaluator_Global_AlertLevel");
    this->RangeAttackExecutionStatusName = TEXT("AIEvaluator_RangeAttack_ExecutionStatus");
    this->CurrentTrapTarget = NULL;
}


