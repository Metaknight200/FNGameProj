#include "FortAthenaNpcEvaluator_FollowPatrolPath.h"

UFortAthenaNpcEvaluator_FollowPatrolPath::UFortAthenaNpcEvaluator_FollowPatrolPath() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_FollowPatrolPath_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_FollowPatrolPath_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_FollowPatrolPath_Destination");
    this->FollowPatrolPathKeyName = TEXT("AIEvaluator_FollowPatrolPath_ExecutionStatus");
    this->FollowPatrolPathMovementStateKeyName = TEXT("AIEvaluator_FollowPatrolPath_MovementState");
    this->FollowPatrolPathDestinationKeyName = TEXT("AIEvaluator_FollowPatrolPath_Destination");
    this->ChanceToTakeABreak = 0.65f;
    this->BreakDurationMin = 3.00f;
    this->BreakDurationMax = 8.00f;
}


