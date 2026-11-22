#pragma once
#include "CoreMinimal.h"
#include "ERecipientPresentationMode.generated.h"

UENUM(BlueprintType)
enum class ERecipientPresentationMode : uint8 {
    Loading,
    GiftPrice,
    AlreadyOwned,
    Unavailable,
};

