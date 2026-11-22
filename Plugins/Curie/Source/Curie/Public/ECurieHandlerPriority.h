#pragma once
#include "CoreMinimal.h"
#include "ECurieHandlerPriority.generated.h"

UENUM(BlueprintType)
enum class ECurieHandlerPriority : uint8 {
    Priority_Unspecified = 0 UMETA(Hidden),
    Priority_1 = 1,
    Priority_2,
    Priority_3,
    Priority_4,
    Priority_5,
    Priority_6,
    Priority_7,
    Priority_8,
    Priority_9,
    Priority_10,
    Priority_Default,
};

