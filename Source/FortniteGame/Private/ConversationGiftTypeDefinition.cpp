#include "ConversationGiftTypeDefinition.h"

FConversationGiftTypeDefinition::FConversationGiftTypeDefinition() {
    this->ServiceProviderRequirementMatchPolicy = EContextRequirementMatchPolicy::RequireAll;
    this->RequirementMatchPolicy = EContextRequirementMatchPolicy::RequireAll;
    this->UINotificationType = NULL;
}

