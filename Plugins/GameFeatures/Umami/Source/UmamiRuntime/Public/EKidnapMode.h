#pragma once
#include "CoreMinimal.h"
#include "EKidnapMode.generated.h"

UENUM(BlueprintType)
enum class EKidnapMode : uint8 {
    None,
    FromTargetingSystem,
    LowPriorityTrackedObject,
    HighPriorityTrackedObject,
};

