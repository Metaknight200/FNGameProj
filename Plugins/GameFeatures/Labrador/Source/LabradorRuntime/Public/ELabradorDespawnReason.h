#pragma once
#include "CoreMinimal.h"
#include "ELabradorDespawnReason.generated.h"

UENUM(BlueprintType)
enum class ELabradorDespawnReason : uint8 {
    DeathByPlayer,
    DeathByBot,
    DeathByAIPawn,
    DeathByStorm,
    Teleport,
    Unknown,
};

