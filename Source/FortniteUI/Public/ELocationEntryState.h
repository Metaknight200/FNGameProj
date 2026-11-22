#pragma once
#include "CoreMinimal.h"
#include "ELocationEntryState.generated.h"

UENUM(BlueprintType)
enum class ELocationEntryState : uint8 {
    Found,
    NotFound,
    Unused,
};

