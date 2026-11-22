#include "FortAthenaAIBotEvaluator_AvoidThreat.h"

UFortAthenaAIBotEvaluator_AvoidThreat::UFortAthenaAIBotEvaluator_AvoidThreat() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_AvoidThreat_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_AvoidThreat_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_AvoidThreat_Destination");
    this->AvoidThreatKeyName = TEXT("AIEvaluator_AvoidThreat_ExecutionStatus");
    this->AvoidThreatMovementStateKeyName = TEXT("AIEvaluator_AvoidThreat_MovementState");
    this->AvoidThreatDestinationKeyName = TEXT("AIEvaluator_AvoidThreat_Destination");
    this->CurrentThreatActorAvoiding = NULL;
    this->CacheEMDigestedSkillSet = NULL;
}


