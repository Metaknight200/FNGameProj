#pragma once
#include "CoreMinimal.h"
#include "EDynamicHUDStrength.generated.h"

UENUM()
enum class EDynamicHUDStrength : int32 {
    Weak,
    Medium,
    Strong,
    Required,
};

