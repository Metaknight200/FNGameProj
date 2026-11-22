#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingTags.generated.h"

UENUM(BlueprintType)
namespace EInteriorAudioBuildingTags {
    enum Type {
        None,
        HasDoors,
        RotationDependant,
        UseConditionalEvaluation,
    };
}

