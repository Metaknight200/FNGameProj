#pragma once
#include "CoreMinimal.h"
#include "EMoleTaskInterruptionType.generated.h"

UENUM(BlueprintType)
enum class EMoleTaskInterruptionType : uint8 {
    RestartTask,
    DisableTask,
};

