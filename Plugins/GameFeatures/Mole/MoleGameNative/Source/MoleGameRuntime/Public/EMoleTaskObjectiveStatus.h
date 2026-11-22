#pragma once
#include "CoreMinimal.h"
#include "EMoleTaskObjectiveStatus.generated.h"

UENUM(BlueprintType)
enum class EMoleTaskObjectiveStatus : uint8 {
    Unresolved,
    SuccessfulCompletion,
    FailedCompletion,
};

