#pragma once
#include "CoreMinimal.h"
#include "EAITractorBeamMode.generated.h"

UENUM(BlueprintType)
enum class EAITractorBeamMode : uint8 {
    None,
    TryToKidnap,
    KeepKidnapped,
};

