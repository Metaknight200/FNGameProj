#include "FortAthenaAIBotEvaluator_DefensiveBuilding.h"

UFortAthenaAIBotEvaluator_DefensiveBuilding::UFortAthenaAIBotEvaluator_DefensiveBuilding() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_DefensiveBuilding_ExecutionStatus");
    this->CachedBuildingDigestedSkillSet = NULL;
    this->CachedBuildingComponent = NULL;
}


