#pragma once
#include "CoreMinimal.h"
#include "EGiftingPresentationMode.generated.h"

UENUM(BlueprintType)
enum class EGiftingPresentationMode : uint8 {
    ConfirmPurchase,
    WrapOptions,
    GiftingProcess,
    GiftingError,
    GiftConfirmed,
    None,
};

