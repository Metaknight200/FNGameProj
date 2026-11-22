#pragma once
#include "CoreMinimal.h"
#include "CurieElementInteractWithElementHandlersContainer.generated.h"

class UCurieElementInteractWithElementHandler;

USTRUCT(BlueprintType)
struct FCurieElementInteractWithElementHandlersContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurieElementInteractWithElementHandler*> Handlers;
    
public:
    CURIE_API FCurieElementInteractWithElementHandlersContainer();
};

