#include "FortAthenaAIBotEvaluator_PlayEmote.h"

UFortAthenaAIBotEvaluator_PlayEmote::UFortAthenaAIBotEvaluator_PlayEmote() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_PlayEmote_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_PlayEmote_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_PlayEmote_Destination");
    this->PlayEmoteExecutionStatusKeyName = TEXT("AIEvaluator_PlayEmote_ExecutionStatus");
    this->PlayEmoteDestinationKeyName = TEXT("AIEvaluator_PlayEmote_Destination");
    this->BlacklistReachingTarget = NULL;
}


