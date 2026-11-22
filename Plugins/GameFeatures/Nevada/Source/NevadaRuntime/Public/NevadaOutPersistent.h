#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutPersistent.h"
#include "NevadaOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FNevadaOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    NEVADARUNTIME_API FNevadaOutPersistent();
};

