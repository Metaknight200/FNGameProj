#pragma once
#include "CoreMinimal.h"
#include "FortConversationConditionalMessage.generated.h"

class UFortConversationContextCondition;

USTRUCT(BlueprintType)
struct FFortConversationConditionalMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortConversationContextCondition* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    FORTNITECONVERSATIONRUNTIME_API FFortConversationConditionalMessage();
};

