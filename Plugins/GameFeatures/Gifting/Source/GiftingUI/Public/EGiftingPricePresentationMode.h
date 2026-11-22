#pragma once
#include "CoreMinimal.h"
#include "EGiftingPricePresentationMode.generated.h"

UENUM(BlueprintType)
enum class EGiftingPricePresentationMode : uint8 {
    MtxCurrency,
    RealMoney,
    Hidden,
};

