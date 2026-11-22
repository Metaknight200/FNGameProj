#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "UObject/Object.h"
#include "FortConversationContextCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConversationContextCondition : public UObject {
    GENERATED_BODY()
public:
    UFortConversationContextCondition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesContextPass(const FConversationContext& Context) const;
    
};

