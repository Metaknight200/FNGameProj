#include "FortAthenaAIBotEvaluator_PatrolAround.h"

UFortAthenaAIBotEvaluator_PatrolAround::UFortAthenaAIBotEvaluator_PatrolAround() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Patrol_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Patrol_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Patrol_Destination");
    this->PatrolDestinationName = TEXT("AIEvaluator_Patrol_Destination");
    this->CacheAthenaGameMode = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
}


