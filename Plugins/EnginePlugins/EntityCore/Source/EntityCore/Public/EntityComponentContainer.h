#pragma once
#include "CoreMinimal.h"
#include "EntityComponentContainer.generated.h"

class UEntityComponent;

USTRUCT(BlueprintType)
struct FEntityComponentContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEntityComponent*> Array;
    
    ENTITYCORE_API FEntityComponentContainer();
};

