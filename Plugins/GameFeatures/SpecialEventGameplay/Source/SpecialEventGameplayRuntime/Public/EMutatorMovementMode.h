#pragma once
#include "CoreMinimal.h"
#include "EMutatorMovementMode.generated.h"

UENUM(BlueprintType)
enum class EMutatorMovementMode : uint8 {
    None,
    BuffetBubbles = 16,
    BuffetBubblesIntro,
    BuffetFlying,
    BuffetFlyingRicochet,
};

