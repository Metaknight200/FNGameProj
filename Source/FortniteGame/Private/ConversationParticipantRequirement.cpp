#include "ConversationParticipantRequirement.h"

FConversationParticipantRequirement::FConversationParticipantRequirement() {
    this->Requirement = NULL;
    this->FailureNodeBehaviour = EConversationRequirementResult::Passed;
}

