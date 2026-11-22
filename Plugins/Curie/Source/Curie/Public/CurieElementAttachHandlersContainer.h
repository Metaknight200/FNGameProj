#pragma once
#include "CoreMinimal.h"
#include "CurieElementAttachHandlersContainer.generated.h"

class UCurieElementAttachHandler;

USTRUCT(BlueprintType)
struct FCurieElementAttachHandlersContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurieElementAttachHandler*> Handlers;
    
public:
    CURIE_API FCurieElementAttachHandlersContainer();
};

