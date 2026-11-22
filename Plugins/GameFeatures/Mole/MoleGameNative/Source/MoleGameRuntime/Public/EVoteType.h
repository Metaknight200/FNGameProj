#pragma once
#include "CoreMinimal.h"
#include "EVoteType.generated.h"

UENUM(BlueprintType)
enum class EVoteType : uint8 {
    None,
    Skip,
    Vote,
};

