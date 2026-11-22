#pragma once
#include "CoreMinimal.h"
#include "EGameplayMessageMatchType.generated.h"

UENUM(BlueprintType)
enum class EGameplayMessageMatchType : uint8 {
    ExactMatch,
    PartialMatch,
};

