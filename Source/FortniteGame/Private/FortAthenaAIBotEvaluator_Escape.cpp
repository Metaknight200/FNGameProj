#include "FortAthenaAIBotEvaluator_Escape.h"

UFortAthenaAIBotEvaluator_Escape::UFortAthenaAIBotEvaluator_Escape() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Escape_ExecutionStatus");
}


