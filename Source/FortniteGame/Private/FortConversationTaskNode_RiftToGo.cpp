#include "FortConversationTaskNode_RiftToGo.h"

UFortConversationTaskNode_RiftToGo::UFortConversationTaskNode_RiftToGo() {
    this->NodeType = TEXT("RiftToGo");
    this->AnalyticsEventName = TEXT("Athena.NPC.RiftToGo.Purchase");
    this->PricingKey = TEXT("RiftToGo");
}


