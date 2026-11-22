#pragma once
#include "CoreMinimal.h"
#include "EFortPickupSourceTypeFlag.generated.h"

UENUM(BlueprintType)
enum class EFortPickupSourceTypeFlag : uint8 {
    Other,
    Player,
    Destruction,
    Container = 4,
    AI = 8,
    Tossed = 16,
    FloorLoot = 32,
    Fishing = 64,
};

