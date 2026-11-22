#pragma once
#include "CoreMinimal.h"
#include "EAvailableSquadSlotsListEntryState.generated.h"

UENUM(BlueprintType)
enum class EAvailableSquadSlotsListEntryState : uint8 {
    Detailed,
    Simplified,
};

