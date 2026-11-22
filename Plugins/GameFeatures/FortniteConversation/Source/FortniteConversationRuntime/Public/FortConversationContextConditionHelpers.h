#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortConversationNodeConditionalMessages.h"
#include "FortConversationContextConditionHelpers.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConversationContextConditionHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortConversationContextConditionHelpers();

private:
    UFUNCTION(BlueprintCallable)
    static bool GetMessageForContext(const FFortConversationNodeConditionalMessages& Messages, const FConversationContext& Context, FText& OutText);
    
};

