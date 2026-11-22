#pragma once
#include "CoreMinimal.h"
#include "BattlePassTileAvailabilityStates.generated.h"

UENUM(BlueprintType)
enum class BattlePassTileAvailabilityStates : uint8 {
    Invalid,
    Available,
    Owned,
    Locked,
};

