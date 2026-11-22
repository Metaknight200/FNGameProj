#pragma once
#include "CoreMinimal.h"
#include "UFortActivatableVideoEvents.generated.h"

UENUM(BlueprintType)
enum class UFortActivatableVideoEvents : uint8 {
    Finished,
    Skipped,
};

