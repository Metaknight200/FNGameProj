#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeItemDropAmount.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeItemDropAmount : uint8 {
    All,
    FlatAmount,
    Percentage,
};

