#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenericMessageQueue.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UGenericMessageQueue : public UObject {
    GENERATED_BODY()
public:
    UGenericMessageQueue();

    UFUNCTION(BlueprintCallable)
    void ProcessNextMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMessagesQueueEmpty();
    
};

