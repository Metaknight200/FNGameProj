#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioQuadrant.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioQuadrant : uint8 {
    None,
    Left,
    Right,
    Top = 4,
    Bottom = 8,
};

