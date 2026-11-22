#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutContinuous.h"
#include "HoagieOutContinuous.generated.h"

USTRUCT(BlueprintType)
struct FHoagieOutContinuous : public FFortVehicleOutContinuous {
    GENERATED_BODY()
public:
    HOAGIERUNTIME_API FHoagieOutContinuous();
};

