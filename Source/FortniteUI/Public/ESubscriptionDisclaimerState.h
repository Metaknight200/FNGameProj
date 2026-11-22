#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionDisclaimerState.generated.h"

UENUM(BlueprintType)
enum class ESubscriptionDisclaimerState : uint8 {
    None,
    Asterisk,
    Received,
};

