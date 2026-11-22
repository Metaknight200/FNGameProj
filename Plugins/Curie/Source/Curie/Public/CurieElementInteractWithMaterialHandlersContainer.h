#pragma once
#include "CoreMinimal.h"
#include "CurieElementInteractWithMaterialHandlersContainer.generated.h"

class UCurieElementInteractWithMaterialHandler;

USTRUCT(BlueprintType)
struct FCurieElementInteractWithMaterialHandlersContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurieElementInteractWithMaterialHandler*> Handlers;
    
public:
    CURIE_API FCurieElementInteractWithMaterialHandlersContainer();
};

