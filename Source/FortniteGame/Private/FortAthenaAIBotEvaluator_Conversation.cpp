#include "FortAthenaAIBotEvaluator_Conversation.h"

UFortAthenaAIBotEvaluator_Conversation::UFortAthenaAIBotEvaluator_Conversation() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Conversation_ExecutionStatus");
    this->ConversationRuntimeParameters = NULL;
    this->AffiliationManager = NULL;
    this->ActorToFocus = NULL;
}


