#pragma once
#include "CoreMinimal.h"
#include "EFortPawnState.generated.h"

UENUM(BlueprintType)
enum class EFortPawnState : uint8 {
    Default,
    InCombat,
    DBNO,
    IsReviving = 4,
    BeingRevived = 8,
    Dead = 16,
};

