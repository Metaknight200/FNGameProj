#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutPersistent.h"
#include "HoagieOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FHoagieOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    HOAGIERUNTIME_API FHoagieOutPersistent();
};

