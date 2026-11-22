#pragma once
#include "CoreMinimal.h"
#include "ItemAndCount.h"
#include "CraftingResult.generated.h"

USTRUCT(BlueprintType)
struct FCraftingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResultLootTierKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> Results;
    
    CRAFTINGRUNTIME_API FCraftingResult();
};

