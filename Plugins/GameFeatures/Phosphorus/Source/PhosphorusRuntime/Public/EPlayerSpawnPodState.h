#pragma once
#include "CoreMinimal.h"
#include "EPlayerSpawnPodState.generated.h"

UENUM(BlueprintType)
enum class EPlayerSpawnPodState : uint8 {
    Setup,
    PreLaunch,
    Moving,
    Landed,
    Ejected,
};

