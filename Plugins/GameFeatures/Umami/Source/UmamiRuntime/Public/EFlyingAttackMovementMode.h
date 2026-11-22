#pragma once
#include "CoreMinimal.h"
#include "EFlyingAttackMovementMode.generated.h"

UENUM(BlueprintType)
enum class EFlyingAttackMovementMode : uint8 {
    None,
    ReachTarget,
    Evade,
};

