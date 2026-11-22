#include "FortAthenaNpcEvaluator_Leash.h"

UFortAthenaNpcEvaluator_Leash::UFortAthenaNpcEvaluator_Leash() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Leash_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Leash_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Leash_Destination");
    this->LeashKeyName = TEXT("AIEvaluator_Leash_ExecutionStatus");
    this->LeashMovementStateKeyName = TEXT("AIEvaluator_Leash_MovementState");
    this->LeashDestinationKeyName = TEXT("AIEvaluator_Leash_Destination");
    this->LeashLocationKeyName = TEXT("AIEvaluator_Leash_Location");
    this->LeashOuterRadiusKeyName = TEXT("AIEvaluator_Leash_OuterRadius");
    this->LeashRuntimeParameters = NULL;
}


