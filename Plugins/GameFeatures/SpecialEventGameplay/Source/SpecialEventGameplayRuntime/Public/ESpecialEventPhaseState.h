#pragma once
#include "CoreMinimal.h"
#include "ESpecialEventPhaseState.generated.h"

UENUM(BlueprintType)
enum class ESpecialEventPhaseState : uint8 {
    Unregistered,
    Inactive,
    Active,
    Deactivated,
};

