#include "FortAthenaAIBotEvaluator_DangerDetection.h"

UFortAthenaAIBotEvaluator_DangerDetection::UFortAthenaAIBotEvaluator_DangerDetection() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_DangerZoneDetected_ExecutionStatus");
    this->DangerNavAreaClass = NULL;
    this->TimeToCheckForDangerAfterValidQuery = 2.00f;
    this->MaxRadiusToSearchForSafePlace = 1500.00f;
    this->DangerZoneDetectedExecutionStatusName = TEXT("AIEvaluator_DangerZoneDetected_ExecutionStatus");
    this->DangerZoneDetectedSafeLocationKeyName = TEXT("AIEvaluator_DangerZoneDetected_SafeLocation");
    this->CachedMovementSkillSet = NULL;
}


