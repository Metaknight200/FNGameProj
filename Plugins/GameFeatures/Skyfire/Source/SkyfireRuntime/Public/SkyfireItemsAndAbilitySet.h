#pragma once
#include "CoreMinimal.h"
#include "SkyfireItemsAndAbilitySet.generated.h"

class UFortAbilitySet;
class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FSkyfireItemsAndAbilitySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortItemDefinition>> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> AbilitySet;
    
    SKYFIRERUNTIME_API FSkyfireItemsAndAbilitySet();
};

