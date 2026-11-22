#include "FortAthenaNpcEvaluator_Patrolling.h"

UFortAthenaNpcEvaluator_Patrolling::UFortAthenaNpcEvaluator_Patrolling() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Patrolling_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Patrolling_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Patrolling_Destination");
    this->PatrollingKeyName = TEXT("AIEvaluator_Patrolling_ExecutionStatus");
    this->PatrollingMovementStateKeyName = TEXT("AIEvaluator_Patrolling_MovementState");
    this->PatrollingDestinationKeyName = TEXT("AIEvaluator_Patrolling_Destination");
    this->DynamicBlueprintStatusKeyName = TEXT("AIEvaluator_DynamicBlueprint_ExecutionStatus");
    this->DynamicBlueprintActorKeyName = TEXT("AIEvaluator_DynamicBlueprint_Actor");
    this->PatrollingShouldMoveKeyName = TEXT("AIEvaluator_Patrolling_ShouldMove");
    this->DistanceToTestPoint = 100.00f;
    this->bCanDisablePatrolling = true;
    this->CachedNpcPatrollingComponent = NULL;
}


