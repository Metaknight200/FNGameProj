#include "FortAthenaBTService_PickUpLoot.h"

UFortAthenaBTService_PickUpLoot::UFortAthenaBTService_PickUpLoot() {
    this->NodeName = TEXT("Player Bot Pick Up Loot");
    this->LootObjectKeyName = TEXT("AIEvaluator_Loot_Object");
    this->ExecutionStatusName = TEXT("AIEvaluator_Loot_ExecutionStatus");
    this->InteractionExecutionStatusName = TEXT("AIEvaluator_Loot_InteractionExecutionStatus");
    this->InteractionContextInfoName = TEXT("AIEvaluator_Loot_InteractionContextInfo");
    this->MovementStateKeyName = TEXT("AIEvaluator_Loot_MovementState");
}


