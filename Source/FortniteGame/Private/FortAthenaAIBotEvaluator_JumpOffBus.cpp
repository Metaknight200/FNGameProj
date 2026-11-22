#include "FortAthenaAIBotEvaluator_JumpOffBus.h"

UFortAthenaAIBotEvaluator_JumpOffBus::UFortAthenaAIBotEvaluator_JumpOffBus() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_JumpOffBus_ExecutionStatus");
    this->JumpOffBusDestinationName = TEXT("AIEvaluator_JumpOffBus_Destination");
    this->JumpOffBusDestinationVolumeKeyName = TEXT("AIEvaluator_POINavigation_NextPOI");
    this->BusDroppingVolume = NULL;
    this->CachedAthenaGameState = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
}


