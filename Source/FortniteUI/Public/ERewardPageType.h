#pragma once
#include "CoreMinimal.h"
#include "ERewardPageType.generated.h"

UENUM(BlueprintType)
enum class ERewardPageType : uint8 {
    Reward,
    Quest,
    Bonus,
    MAX,
};

