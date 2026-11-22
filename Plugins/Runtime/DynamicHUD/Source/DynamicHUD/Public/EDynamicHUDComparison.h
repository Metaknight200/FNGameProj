#pragma once
#include "CoreMinimal.h"
#include "EDynamicHUDComparison.generated.h"

UENUM()
enum class EDynamicHUDComparison : int32 {
    Equal,
    LessOrEqual,
    GreaterOrEqual,
};

