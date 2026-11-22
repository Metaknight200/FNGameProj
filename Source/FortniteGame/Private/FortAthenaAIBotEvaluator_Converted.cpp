#include "FortAthenaAIBotEvaluator_Converted.h"

UFortAthenaAIBotEvaluator_Converted::UFortAthenaAIBotEvaluator_Converted() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Converted_ExecutionStatus");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Converted_Destination");
    this->ShouldMoveTowardsConverterName = TEXT("AIEvaluator_Converted_ShouldMoveTowardsConverter");
    this->ShouldTeleportTowardsConverterName = TEXT("AIEvaluator_Converted_ShouldTeleportTowardsConverter");
    this->ConvertedAllowPatrolAroundName = TEXT("AIEvaluator_Converted_AllowPatrolAround");
    this->ConvertedAllowScanAroundWhenWaitingName = TEXT("AIEvaluator_Converted_AllowScanAroundWhenWaiting");
    this->ConvertedDestinationName = TEXT("AIEvaluator_Converted_Destination");
    this->CrouchExecutionStatusName = TEXT("AIEvaluator_Crouch_ExecutionStatus");
    this->SprintExecutionStatusName = TEXT("AIEvaluator_Sprinting_ExecutionStatus");
    this->ConverterPawn = NULL;
    this->CachedAIBotConvertParameters = NULL;
}

void UFortAthenaAIBotEvaluator_Converted::OnUnconvertedEvent() {
}

void UFortAthenaAIBotEvaluator_Converted::OnConvertedEvent(AFortPawn* InstigatorPawn) {
}


