#include "FortConversationTaskNode_DataDrivenService.h"

UFortConversationTaskNode_DataDrivenService::UFortConversationTaskNode_DataDrivenService() {
    this->NodeType = TEXT("service.");
    this->RequirementMatchPolicy = ERequirementMatchPolicy::RequireAll;
    this->PricingColumn = 0;
    this->ServiceBriefConfigCollection = NULL;
}

bool UFortConversationTaskNode_DataDrivenService::GetServicePrice(float& PriceOut) const {
    return false;
}


