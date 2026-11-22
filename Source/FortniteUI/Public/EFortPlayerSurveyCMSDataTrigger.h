#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataTrigger.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyCMSDataTrigger : uint8 {
    Unspecified_Internal = 0 UMETA(Hidden),
    rm = 2,
};

