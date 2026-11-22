#pragma once
#include "CoreMinimal.h"
#include "EMoleLightsMode.generated.h"

UENUM(BlueprintType)
enum class EMoleLightsMode : uint8 {
    Standard,
    Emergency,
    Disabled,
};

