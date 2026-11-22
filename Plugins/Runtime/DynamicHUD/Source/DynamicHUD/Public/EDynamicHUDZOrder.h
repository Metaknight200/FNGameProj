#pragma once
#include "CoreMinimal.h"
#include "EDynamicHUDZOrder.generated.h"

UENUM()
enum class EDynamicHUDZOrder : int32 {
    Back = 500,
    Middle = 1000,
    Front = 1500,
    Custom = 2000,
};

