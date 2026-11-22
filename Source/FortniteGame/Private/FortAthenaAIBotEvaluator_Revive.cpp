#include "FortAthenaAIBotEvaluator_Revive.h"

UFortAthenaAIBotEvaluator_Revive::UFortAthenaAIBotEvaluator_Revive() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Revive_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Revive_MovementState");
    this->ReviveTargetKeyName = TEXT("AIEvaluator_Revive_Target");
    this->ReviveBehaviorRuntimeParameters = NULL;
    this->CurrentReviveTarget = NULL;
    this->ReviveSkillSet = NULL;
}


