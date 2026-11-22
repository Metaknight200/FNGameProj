#include "FortAthenaAIBotEvaluator_DBNO.h"

UFortAthenaAIBotEvaluator_DBNO::UFortAthenaAIBotEvaluator_DBNO() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_DBNO_ExecutionStatus");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_DBNO_MovementState");
    this->DBNODestinationKeyName = TEXT("AIEvaluator_DBNO_Destination");
    this->bAllowReachSquadmates = true;
    this->bAllowReachSameFactionNPCs = false;
    this->DBNOSkillSet = NULL;
    this->DBNOBehaviorRuntimeParameters = NULL;
}

void UFortAthenaAIBotEvaluator_DBNO::OnAllyPawnDBNOStateChanged(AFortPawn* InPlayer, bool bInIsDBNO) {
}


