#pragma once
#include "CoreMinimal.h"
#include "EFortMantisNotifyRotationWarpRateRule.generated.h"

UENUM(BlueprintType)
enum class EFortMantisNotifyRotationWarpRateRule : uint8 {
    Snap,
    WindowDurationLerp,
};

