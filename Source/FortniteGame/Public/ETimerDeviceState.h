#pragma once
#include "CoreMinimal.h"
#include "ETimerDeviceState.generated.h"

UENUM(BlueprintType)
enum class ETimerDeviceState : uint8 {
    Enabled,
    Activated,
    Paused,
    Completed,
    Disabled,
    MAX,
};

