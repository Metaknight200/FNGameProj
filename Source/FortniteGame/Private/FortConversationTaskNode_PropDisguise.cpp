#include "FortConversationTaskNode_PropDisguise.h"

UFortConversationTaskNode_PropDisguise::UFortConversationTaskNode_PropDisguise() {
    this->NodeType = TEXT("PropDisguise");
    this->AnalyticsEventName = TEXT("Athena.NPC.PropDisguise.Purchase");
    this->PricingKey = TEXT("PropDisguise");
}


