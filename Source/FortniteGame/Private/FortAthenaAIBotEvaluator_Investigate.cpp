#include "FortAthenaAIBotEvaluator_Investigate.h"

UFortAthenaAIBotEvaluator_Investigate::UFortAthenaAIBotEvaluator_Investigate() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Investigate_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Investigate_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Global_LastKnownPosition");
    this->LastKnownPositionName = TEXT("AIEvaluator_Global_LastKnownPosition");
    this->DestinationKeyName = TEXT("AIEvaluator_Investigate_Destination");
    this->MoveToDestinationKeyName = TEXT("AIEvaluator_Investigate_MoveToDestination");
    this->AggressivenessName = TEXT("AIEvaluator_Global_Aggressiveness");
    this->InvestigatingSupportingActor = NULL;
    this->UnderminingBuildingActor = NULL;
    this->BlacklistReachingTarget = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
}


