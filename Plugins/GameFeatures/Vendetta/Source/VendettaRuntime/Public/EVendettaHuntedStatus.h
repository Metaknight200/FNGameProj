#pragma once
#include "CoreMinimal.h"
#include "EVendettaHuntedStatus.generated.h"

UENUM(BlueprintType)
enum class EVendettaHuntedStatus : uint8 {
    NotHunted,
    Hunted_Far,
    Hunted_Near,
};

