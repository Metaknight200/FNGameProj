#include "FortAthenaAIBotEvaluator_Loot.h"

UFortAthenaAIBotEvaluator_Loot::UFortAthenaAIBotEvaluator_Loot() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Loot_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Loot_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Loot_Destination");
    this->CachedAIServiceLoot = NULL;
    this->LootingSkillSet = NULL;
    this->LootDestinationKeyName = TEXT("AIEvaluator_Loot_Destination");
    this->LootObjectKeyName = TEXT("AIEvaluator_Loot_Object");
    this->LootTypeKeyName = TEXT("AIEvaluator_Loot_Type");
    this->POINavigationExecutionStatusKeyName = TEXT("AIEvaluator_POINavigation_ExecutionStatus");
    this->POINavigationExecutionStatus = EExecutionStatus::ExecutionDenied;
    this->CurrentLootActor = NULL;
    this->CachedTeamInfo = NULL;
}


