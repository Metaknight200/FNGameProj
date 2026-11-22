#include "FortAthenaAIBotEvaluator_Heal.h"

UFortAthenaAIBotEvaluator_Heal::UFortAthenaAIBotEvaluator_Heal() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Healing_ExecutionStatus");
    this->HealingObjectKeyName = TEXT("AIEvaluator_Healing_Object");
    this->HealingSkillSet = NULL;
}


