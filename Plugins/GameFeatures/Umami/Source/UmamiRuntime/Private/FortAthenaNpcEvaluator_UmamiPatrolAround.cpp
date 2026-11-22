#include "FortAthenaNpcEvaluator_UmamiPatrolAround.h"

UFortAthenaNpcEvaluator_UmamiPatrolAround::UFortAthenaNpcEvaluator_UmamiPatrolAround() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Patrol_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Patrol_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Patrol_Destination");
    this->PatrolDestinationName = TEXT("AIEvaluator_Patrol_Destination");
}


