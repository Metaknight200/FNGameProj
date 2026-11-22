#pragma once
#include "CoreMinimal.h"
#include "EMoleSabotageInterruptionType.generated.h"

UENUM(BlueprintType)
enum class EMoleSabotageInterruptionType : uint8 {
    Interrupt,
    Pause,
};

