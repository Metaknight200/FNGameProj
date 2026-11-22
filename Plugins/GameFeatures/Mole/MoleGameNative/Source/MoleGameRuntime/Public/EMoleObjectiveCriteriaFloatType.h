#pragma once
#include "CoreMinimal.h"
#include "EMoleObjectiveCriteriaFloatType.generated.h"

UENUM(BlueprintType)
enum class EMoleObjectiveCriteriaFloatType : uint8 {
    FloatValue,
    UseObjectiveTaskActorCount,
    ExplicitActorCount,
};

