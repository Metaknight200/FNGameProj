#pragma once
#include "CoreMinimal.h"
#include "EFortAILODLevel.generated.h"

UENUM(BlueprintType)
enum class EFortAILODLevel : uint8 {
    Invalid,
    MIN = Invalid,
    Dormant,
    BelowLower,
    Lower,
    AboveLower,
    BelowNormal,
    Normal,
    AboveNormal,
    MAX,
};

