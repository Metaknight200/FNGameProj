#pragma once
#include "CoreMinimal.h"
#include "EMinigameActivityWidgetStatFormat.generated.h"

UENUM(BlueprintType)
enum class EMinigameActivityWidgetStatFormat : uint8 {
    Score,
    Time,
    AddTime,
    Distance,
    Laps,
};

