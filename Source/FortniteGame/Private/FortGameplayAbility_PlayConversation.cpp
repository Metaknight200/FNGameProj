#include "FortGameplayAbility_PlayConversation.h"

UFortGameplayAbility_PlayConversation::UFortGameplayAbility_PlayConversation() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->bIsCancelable = true;
    this->ConversationToPlay = NULL;
}


