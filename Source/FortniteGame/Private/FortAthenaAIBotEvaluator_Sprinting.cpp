#include "FortAthenaAIBotEvaluator_Sprinting.h"

UFortAthenaAIBotEvaluator_Sprinting::UFortAthenaAIBotEvaluator_Sprinting() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Sprinting_ExecutionStatus");
    this->JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    this->bSprintOnlyInWater = false;
    this->SkillSet = NULL;
}


