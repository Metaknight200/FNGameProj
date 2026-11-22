#pragma once
#include "CoreMinimal.h"
#include "EPerceptionState.generated.h"

UENUM(BlueprintType)
enum class EPerceptionState : uint8 {
    Threat_Seeing,
    Threat_LKP,
    Threat_Alerted,
    ObstacleIncoming,
    ObstacleBlockedBy,
    ObstacleDetectedTrap,
    Unknown,
    Count = Unknown,
    Threat_Count = ObstacleIncoming,
};

