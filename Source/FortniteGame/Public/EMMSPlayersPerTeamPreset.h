#pragma once
#include "CoreMinimal.h"
#include "EMMSPlayersPerTeamPreset.generated.h"

UENUM(BlueprintType)
enum class EMMSPlayersPerTeamPreset : uint8 {
    Unspecified_Internal = 0 UMETA(Hidden),
    Solos = 1,
    Duos,
    Trios,
    Squads,
    SplitEvenly,
    Dynamic,
};

