#pragma once
#include "CoreMinimal.h"
#include "ECraftingObjectState.generated.h"

UENUM(BlueprintType)
enum class ECraftingObjectState : uint8 {
    Invalid,
    Idle,
    Crafting,
    Ready,
    OverCrafting,
    Resetting,
    TotalStates,
};

