#include "FortAthenaAIBotEvaluator_CharacterLaunched.h"

UFortAthenaAIBotEvaluator_CharacterLaunched::UFortAthenaAIBotEvaluator_CharacterLaunched() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_CharacterLaunched_ExecutionStatus");
    this->bSteerInSameDirectionAsLaunchVelocity = false;
    this->CharacterLaunchedExecutionStatusKeyName = TEXT("AIEvaluator_CharacterLaunched_ExecutionStatus");
    this->SteerDirectionKeyName = TEXT("AIEvaluator_CharacterLaunched_SteerDirection");
    this->CachedMovementSkillSet = NULL;
}


