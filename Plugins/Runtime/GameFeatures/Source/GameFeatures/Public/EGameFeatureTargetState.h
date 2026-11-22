#pragma once
#include "CoreMinimal.h"
#include "EGameFeatureTargetState.generated.h"

UENUM(BlueprintType)
enum class EGameFeatureTargetState : uint8 {
    Installed,
    Registered,
    Loaded,
    Active,
};

