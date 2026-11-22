#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutContinuous.h"
#include "DagwoodOutContinuous.generated.h"

USTRUCT(BlueprintType)
struct FDagwoodOutContinuous : public FFortVehicleOutContinuous {
    GENERATED_BODY()
public:
    VALETRUNTIME_API FDagwoodOutContinuous();
};

