#pragma once
#include "CoreMinimal.h"
#include "ECurieHandlerBehavior.generated.h"

UENUM(BlueprintType)
enum class ECurieHandlerBehavior : uint8 {
    Handler_Add,
    Handler_Replace,
};

