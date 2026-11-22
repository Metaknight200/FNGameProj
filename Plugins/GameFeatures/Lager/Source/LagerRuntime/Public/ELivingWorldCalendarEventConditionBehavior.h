#pragma once
#include "CoreMinimal.h"
#include "ELivingWorldCalendarEventConditionBehavior.generated.h"

UENUM(BlueprintType)
enum class ELivingWorldCalendarEventConditionBehavior : uint8 {
    IsActive,
    Ratio,
};

