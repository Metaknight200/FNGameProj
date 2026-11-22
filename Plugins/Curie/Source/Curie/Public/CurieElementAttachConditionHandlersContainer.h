#pragma once
#include "CoreMinimal.h"
#include "CurieElementAttachConditionHandlersContainer.generated.h"

class UCurieElementAttachConditionHandler;

USTRUCT(BlueprintType)
struct FCurieElementAttachConditionHandlersContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurieElementAttachConditionHandler*> Handlers;
    
public:
    CURIE_API FCurieElementAttachConditionHandlersContainer();
};

