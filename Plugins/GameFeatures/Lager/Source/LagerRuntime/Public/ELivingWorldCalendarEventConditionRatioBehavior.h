#pragma once
#include "CoreMinimal.h"
#include "ELivingWorldCalendarEventConditionRatioBehavior.generated.h"

UENUM(BlueprintType)
enum class ELivingWorldCalendarEventConditionRatioBehavior : uint8 {
    Less,
    LessOrEqual,
    Greater,
    GreaterOrEqual,
    InBetween,
};

