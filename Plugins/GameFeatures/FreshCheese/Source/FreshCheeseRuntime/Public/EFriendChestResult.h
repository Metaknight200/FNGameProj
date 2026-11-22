#pragma once
#include "CoreMinimal.h"
#include "EFriendChestResult.generated.h"

UENUM(BlueprintType)
enum class EFriendChestResult : uint8 {
    Ignored,
    Partial,
    Abandoned,
    Opened,
    SpawnFailure,
};

