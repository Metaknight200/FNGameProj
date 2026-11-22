#pragma once
#include "CoreMinimal.h"
#include "ConversationRequirementNode.h"
#include "FortConversationRequirement_HasNoActiveQuests.generated.h"

UCLASS(Blueprintable)
class UFortConversationRequirement_HasNoActiveQuests : public UConversationRequirementNode {
    GENERATED_BODY()
public:
    UFortConversationRequirement_HasNoActiveQuests();

};

