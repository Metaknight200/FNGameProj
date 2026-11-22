#include "FortAthenaNpcEvaluator_Encampment.h"

UFortAthenaNpcEvaluator_Encampment::UFortAthenaNpcEvaluator_Encampment() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Encampment_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Encampment_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Encampment_Destination");
    this->EncampmentStatusKeyName = TEXT("AIEvaluator_Encampment_ExecutionStatus");
    this->EncampmentMovementStateKeyName = TEXT("AIEvaluator_Encampment_MovementState");
    this->EncampmentCenterLocationKeyName = TEXT("AIEvaluator_Encampment_CenterLocation");
    this->EncampmentDestinationKeyName = TEXT("AIEvaluator_Encampment_Destination");
    this->EncampmentAroundCampFireLocationKeyName = TEXT("AIEvaluator_Encampment_AroundCampFireLocation");
    this->EncampmentRoleKeyName = TEXT("AIEvaluator_Encampment_Role");
    this->DefensiveBuildName = TEXT("AIEvaluator_DefensiveBuilding_ExecutionStatus");
}


