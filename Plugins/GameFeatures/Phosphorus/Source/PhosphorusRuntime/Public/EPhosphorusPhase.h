#pragma once
#include "CoreMinimal.h"
#include "EPhosphorusPhase.generated.h"

UENUM(BlueprintType)
enum class EPhosphorusPhase : uint8 {
    PreMatch,
    RoundSetup,
    PrePodLaunch,
    PodsLaunched,
    RoundInProgress,
    RoundEnd,
    RoundEndUI,
    MatchEnd,
    MatchEndUI,
};

