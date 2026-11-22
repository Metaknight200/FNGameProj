#pragma once
#include "CoreMinimal.h"
#include "EShowOnHudMode.generated.h"

UENUM(BlueprintType)
enum class EShowOnHudMode : uint8 {
    No,
    Detailed,
    List,
    Both,
    MAX,
};

