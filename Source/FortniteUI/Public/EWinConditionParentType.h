#pragma once
#include "CoreMinimal.h"
#include "EWinConditionParentType.generated.h"

UENUM(BlueprintType)
enum class EWinConditionParentType : uint8 {
    None,
    Desktop,
    Mobile,
};

