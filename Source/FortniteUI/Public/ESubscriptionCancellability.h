#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionCancellability.generated.h"

UENUM(BlueprintType)
enum class ESubscriptionCancellability : uint8 {
    NotCancellable,
    CancellabeOnPlatform,
    CancellableAnywhere,
};

