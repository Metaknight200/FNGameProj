#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataGameplayTagQueryExprType.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyCMSDataGameplayTagQueryExprType : uint8 {
    Unspecified_Internal = 0 UMETA(Hidden),
    n = 3,
    s = 1,
    a,
};

