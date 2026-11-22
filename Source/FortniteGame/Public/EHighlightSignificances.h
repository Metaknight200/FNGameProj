#pragma once
#include "CoreMinimal.h"
#include "EHighlightSignificances.generated.h"

UENUM(BlueprintType)
enum class EHighlightSignificances : uint8 {
    NotSignificant,
    SomewhatSignificant,
    Significant = 21,
    VerySignificant = 31,
    Critical = 41,
};

