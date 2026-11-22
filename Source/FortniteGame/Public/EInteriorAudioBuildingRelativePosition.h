#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingRelativePosition.generated.h"

UENUM(BlueprintType)
namespace EInteriorAudioBuildingRelativePosition {
    enum Type {
        SameCell,
        SameCellQuadrantTestFailed,
        OtherCellParallelToForward,
        OtherCellParallelToRight,
        OtherCellParallelToUp,
        Max_None,
    };
}

