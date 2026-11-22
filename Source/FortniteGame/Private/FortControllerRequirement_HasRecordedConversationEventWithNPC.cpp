#include "FortControllerRequirement_HasRecordedConversationEventWithNPC.h"

UFortControllerRequirement_HasRecordedConversationEventWithNPC::UFortControllerRequirement_HasRecordedConversationEventWithNPC() {
    this->bRequireExactEventTagMatch = true;
    this->QueryMethod = EConversationEventQueryMethod::CheckAgainstConversationEntryTag;
}


