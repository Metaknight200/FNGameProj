#pragma once
#include "CoreMinimal.h"
#include "EDynamicHUDAnchor.generated.h"

UENUM()
enum class EDynamicHUDAnchor : int32 {
    TopLeft,
    TopCenter,
    TopRight,
    CenterLeft,
    CenterCenter,
    CenterRight,
    BottomLeft,
    BottomCenter,
    BottomRight,
};

