#pragma once
#include "CoreMinimal.h"
#include "FortVehicleInternalPersistent.h"
#include "DagwoodInternal.generated.h"

USTRUCT(BlueprintType)
struct FDagwoodInternal : public FFortVehicleInternalPersistent {
    GENERATED_BODY()
public:
    VALETRUNTIME_API FDagwoodInternal();
};

