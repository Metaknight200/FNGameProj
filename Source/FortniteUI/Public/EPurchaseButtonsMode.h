#pragma once
#include "CoreMinimal.h"
#include "EPurchaseButtonsMode.generated.h"

UENUM(BlueprintType)
enum class EPurchaseButtonsMode : uint8 {
    Default,
    ClaimSubscriptionRewards,
    SubscriptionPaymentError,
    SubscriptionBlockedBenefits,
};

