#pragma once
#include "CoreMinimal.h"
#include "EAthenaSeasonMapIconState.generated.h"

UENUM(BlueprintType)
enum class EAthenaSeasonMapIconState : uint8 {
    Unknown,
    Found,
    Interacted,
};

