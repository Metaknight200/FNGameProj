#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CraftingIngredientRequirement.generated.h"

USTRUCT(BlueprintType)
struct FCraftingIngredientRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IngredientTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    CRAFTINGRUNTIME_API FCraftingIngredientRequirement();
};

