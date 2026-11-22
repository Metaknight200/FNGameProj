#pragma once
#include "CoreMinimal.h"
#include "EFlyingEvasiveManeuversMode.generated.h"

UENUM(BlueprintType)
enum class EFlyingEvasiveManeuversMode : uint8 {
    Disabled,
    HorizontalAndVerticalWhileMoving,
    HorizontalAndVerticalWhileStandingStill,
};

