#pragma once
#include "CoreMinimal.h"
#include "CraftingIngredientRequirement.h"
#include "CraftingIngredientQueryState.generated.h"

USTRUCT(BlueprintType)
struct FCraftingIngredientQueryState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingIngredientRequirement Requirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Owned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Missing;
    
    CRAFTINGRUNTIME_API FCraftingIngredientQueryState();
};

