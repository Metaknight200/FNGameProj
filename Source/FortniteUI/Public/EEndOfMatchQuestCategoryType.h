#pragma once
#include "CoreMinimal.h"
#include "EEndOfMatchQuestCategoryType.generated.h"

UENUM(BlueprintType)
enum class EEndOfMatchQuestCategoryType : uint8 {
    Completed,
    InProgress,
};

