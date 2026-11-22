#pragma once
#include "CoreMinimal.h"
#include "EPlayerSpawnPodSpawnState.generated.h"

UENUM(BlueprintType)
enum class EPlayerSpawnPodSpawnState : uint8 {
    FirstSpawn,
    Respawn,
};

