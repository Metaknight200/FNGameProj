#include "FortAthenaAIBotEvaluator_DanceOnKill.h"

UFortAthenaAIBotEvaluator_DanceOnKill::UFortAthenaAIBotEvaluator_DanceOnKill() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_PlayEmote_ExecutionStatus");
    this->LastKillPositionKeyName = TEXT("AIEvaluator_Global_LastKillPosition");
    this->LastKillTimeKeyName = TEXT("AIEvaluator_Global_LastKillTime");
    this->LastKillWasABotKeyName = TEXT("AIEvaluator_Global_LastKillVictimWasABot");
    this->PlayEmoteExecutionStatusKeyName = TEXT("AIEvaluator_PlayEmote_ExecutionStatus");
    this->CacheEmoteDigestedSkillSet = NULL;
}


