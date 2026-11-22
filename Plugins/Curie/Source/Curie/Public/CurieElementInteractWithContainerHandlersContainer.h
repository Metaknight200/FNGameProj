#pragma once
#include "CoreMinimal.h"
#include "CurieElementInteractWithContainerHandlersContainer.generated.h"

class UCurieElementInteractWithContainerHandler;

USTRUCT(BlueprintType)
struct FCurieElementInteractWithContainerHandlersContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurieElementInteractWithContainerHandler*> Handlers;
    
public:
    CURIE_API FCurieElementInteractWithContainerHandlersContainer();
};

