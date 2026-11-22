#pragma once
#include "CoreMinimal.h"
#include "EMolePlayerLeftReason.generated.h"

UENUM(BlueprintType)
enum class EMolePlayerLeftReason : uint8 {
    PlayerLeft,
    PlayerKickedNoPawn,
};

