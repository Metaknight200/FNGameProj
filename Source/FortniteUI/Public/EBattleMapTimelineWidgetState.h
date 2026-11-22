#pragma once
#include "CoreMinimal.h"
#include "EBattleMapTimelineWidgetState.generated.h"

UENUM(BlueprintType)
enum class EBattleMapTimelineWidgetState : uint8 {
    None,
    HasNext,
    HasPrevious,
    IsInReplay = 4,
    CanBeScrubbed = 8,
    IsStreaming = 16,
    Invalid = 32,
};

