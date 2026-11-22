#pragma once
#include "CoreMinimal.h"
#include "ESkyfirePhase.generated.h"

UENUM(BlueprintType)
enum class ESkyfirePhase : uint8 {
    None,
    Prison,
    CoreGameplay,
    AllPlayersExited,
};

