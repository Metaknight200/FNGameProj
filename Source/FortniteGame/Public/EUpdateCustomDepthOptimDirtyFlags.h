#pragma once
#include "CoreMinimal.h"
#include "EUpdateCustomDepthOptimDirtyFlags.generated.h"

UENUM(BlueprintType)
enum class EUpdateCustomDepthOptimDirtyFlags : uint8 {
    None,
    CharacterParts,
    Weapon,
    PossessedProp = 4,
};

