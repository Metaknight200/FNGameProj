#pragma once
#include "CoreMinimal.h"
#include "ECraftingIngredientReqError.generated.h"

UENUM(BlueprintType)
enum class ECraftingIngredientReqError : uint8 {
    None,
    NoItem,
    NotEnough,
};

