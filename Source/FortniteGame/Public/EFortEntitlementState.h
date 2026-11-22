#pragma once
#include "CoreMinimal.h"
#include "EFortEntitlementState.generated.h"

UENUM(BlueprintType)
enum class EFortEntitlementState : uint8 {
    NotRequested,
    Requesting,
    RequestError,
    NotGranted,
    Granted,
    DevGranted,
};

