#pragma once
#include "CoreMinimal.h"
#include "EHoagieState.generated.h"

UENUM()
enum class EHoagieState : int32 {
    STARTUP,
    STARTUP_LIFT,
    FLIGHT,
    AUTO_LANDING,
    SPIN_CRASHING,
    CRASHING_NO_SPIN,
    CRASH_LANDED,
    LANDED,
    EXPLODING,
    NONE,
};

