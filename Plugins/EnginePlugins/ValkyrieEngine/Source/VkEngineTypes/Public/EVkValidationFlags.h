#pragma once
#include "CoreMinimal.h"
#include "EVkValidationFlags.generated.h"

UENUM(BlueprintType)
enum class EVkValidationFlags : uint8 {
    None,
    VF_IgnoreValidation,
    VF_AllowMissingGameFeatureDataAsset,
    VF_AllowEngineContent = 4,
    VF_AllowGameContent = 8,
    VF_NoPreCheckVerse = 16,
};

