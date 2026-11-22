#pragma once
#include "CoreMinimal.h"
#include "ENevadaFlightStates.generated.h"

UENUM(BlueprintType)
enum class ENevadaFlightStates : uint8 {
    FLIGHT,
    CRASHING,
    CRASHED,
    REBOOTING,
    LANDING,
    LANDED,
    IDLE,
    NONE,
};

