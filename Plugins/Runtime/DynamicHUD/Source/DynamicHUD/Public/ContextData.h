#pragma once
#include "CoreMinimal.h"
#include "ContextData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FContextData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> Contexts;
    
    DYNAMICHUD_API FContextData();
};

