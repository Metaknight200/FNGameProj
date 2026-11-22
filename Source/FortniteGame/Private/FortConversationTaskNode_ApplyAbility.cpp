#include "FortConversationTaskNode_ApplyAbility.h"

UFortConversationTaskNode_ApplyAbility::UFortConversationTaskNode_ApplyAbility() {
    this->GrantedAbility = NULL;
    this->Level = 0;
    this->bPreventUseIfAbilityAlreadyActive = true;
    this->bActivateImmediatelyOnGranting = false;
}


