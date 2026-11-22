#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingFlags.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingFlags : uint8 {
    None,
    CreateNewOnly,
    NoReservation,
    Private = 4,
    UseWorldDataOwner = 8,
};

