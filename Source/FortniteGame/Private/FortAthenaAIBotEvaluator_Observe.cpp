#include "FortAthenaAIBotEvaluator_Observe.h"

UFortAthenaAIBotEvaluator_Observe::UFortAthenaAIBotEvaluator_Observe() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Observe_ExecutionStatus");
    this->AggressivenessName = TEXT("AIEvaluator_Global_Aggressiveness");
}


