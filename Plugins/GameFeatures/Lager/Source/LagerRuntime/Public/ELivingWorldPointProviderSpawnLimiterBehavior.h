#pragma once
#include "CoreMinimal.h"
#include "ELivingWorldPointProviderSpawnLimiterBehavior.generated.h"

UENUM(BlueprintType)
enum class ELivingWorldPointProviderSpawnLimiterBehavior : uint8 {
    Lifetime,
    Concurrent,
};

