#include "FortAthenaAIBotEvaluator_SelectNextPOI.h"

UFortAthenaAIBotEvaluator_SelectNextPOI::UFortAthenaAIBotEvaluator_SelectNextPOI() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_POINavigation_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_POINavigation_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Marker_MarkerLocation");
    this->NextPOIKeyName = TEXT("AIEvaluator_POINavigation_NextPOI");
    this->MarkerLocationKeyName = TEXT("AIEvaluator_Marker_MarkerLocation");
    this->CacheLootingSkillSet = NULL;
}


