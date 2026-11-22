#pragma once
#include "CoreMinimal.h"
#include "EAthenaChallengeTimerState.generated.h"

UENUM(BlueprintType)
enum class EAthenaChallengeTimerState : uint8 {
    Hidden,
    WeeksRemaining,
    DaysRemaining,
    HoursRemaining,
    MinutesRemaining,
    Urgent,
};

