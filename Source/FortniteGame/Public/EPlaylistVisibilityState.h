#pragma once
#include "CoreMinimal.h"
#include "EPlaylistVisibilityState.generated.h"

UENUM(BlueprintType)
enum class EPlaylistVisibilityState : uint8 {
    Unspecified_Internal = 0 UMETA(Hidden),
    Enabled = 1,
    Disabled,
    EnabledButInvisible,
    Hidden,
};

