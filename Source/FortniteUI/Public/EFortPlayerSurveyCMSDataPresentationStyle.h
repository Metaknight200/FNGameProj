#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataPresentationStyle.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyCMSDataPresentationStyle : uint8 {
    Unspecified_Internal = 0 UMETA(Hidden),
    standard = 1,
    rating,
};

