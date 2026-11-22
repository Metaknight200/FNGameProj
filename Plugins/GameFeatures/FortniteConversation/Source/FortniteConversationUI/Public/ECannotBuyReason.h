#pragma once
#include "CoreMinimal.h"
#include "ECannotBuyReason.generated.h"

UENUM(BlueprintType)
enum class ECannotBuyReason : uint8 {
    CannotAfford,
    OutOfStock,
};

