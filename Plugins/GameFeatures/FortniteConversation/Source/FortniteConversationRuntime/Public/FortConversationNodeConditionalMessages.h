#pragma once
#include "CoreMinimal.h"
#include "FortConversationConditionalMessage.h"
#include "FortConversationNodeConditionalMessages.generated.h"

USTRUCT(BlueprintType)
struct FFortConversationNodeConditionalMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortConversationConditionalMessage> Messages;
    
    FORTNITECONVERSATIONRUNTIME_API FFortConversationNodeConditionalMessages();
};

