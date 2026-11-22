#pragma once
#include "CoreMinimal.h"
#include "EMoleTaskLogicSubobjectEventPolicy.generated.h"

UENUM(BlueprintType)
enum class EMoleTaskLogicSubobjectEventPolicy : uint8 {
    None,
    OnPhaseEnd,
    OnTaskInterruption,
    OnTaskRemoval = 4,
    OnTaskCompletion = 8,
};

