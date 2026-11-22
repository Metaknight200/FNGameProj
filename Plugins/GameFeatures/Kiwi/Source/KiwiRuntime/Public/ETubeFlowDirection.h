#pragma once
#include "CoreMinimal.h"
#include "ETubeFlowDirection.generated.h"

UENUM(BlueprintType)
enum class ETubeFlowDirection : uint8 {
    None,
    Forward,
    Backward,
};

