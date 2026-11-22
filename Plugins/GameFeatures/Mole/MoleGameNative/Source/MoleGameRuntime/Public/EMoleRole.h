#pragma once
#include "CoreMinimal.h"
#include "EMoleRole.generated.h"

UENUM(BlueprintType)
enum class EMoleRole : uint8 {
    Unknown,
    Ally,
    Enemy,
};

