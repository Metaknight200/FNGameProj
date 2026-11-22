#pragma once
#include "CoreMinimal.h"
#include "FortSpatialGrid.h"
#include "FortAthenaLivingWorldDensityGrid.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaLivingWorldDensityGrid : public FFortSpatialGrid {
    GENERATED_BODY()
public:
    LAGERRUNTIME_API FFortAthenaLivingWorldDensityGrid();
};

