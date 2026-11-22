#include "FortConversationTaskNode_Speech.h"

UFortConversationTaskNode_Speech::UFortConversationTaskNode_Speech() {
    this->bUsePerNPC_ContextualMessageLookup = false;
    this->bLookupViaServiceProviderTag = false;
}

bool UFortConversationTaskNode_Speech::ResolveMessageForContext(const FGameplayTag& SpeakerParticipantTag, const FConversationContext& ConversationContext, FContextualMessageQueryResult& OutResult) const {
    return false;
}


