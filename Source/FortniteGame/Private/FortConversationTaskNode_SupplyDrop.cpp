#include "FortConversationTaskNode_SupplyDrop.h"

UFortConversationTaskNode_SupplyDrop::UFortConversationTaskNode_SupplyDrop() {
    this->NodeType = TEXT("service.supplydrop");
    this->SupplyDropLocationPolicy = ESupplyDropSpawnLocationPolicy::SafeZone;
    this->bLimitedStock = true;
}


