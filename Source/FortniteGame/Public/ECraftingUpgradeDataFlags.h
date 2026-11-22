#pragma once
#include "CoreMinimal.h"
#include "ECraftingUpgradeDataFlags.generated.h"

UENUM(BlueprintType)
enum class ECraftingUpgradeDataFlags : uint8 {
    None,
    OverrideWrap,
    Durability,
    PhantomAmmo = 4,
    LoadedAmmo = 8,
    ModSlots = 16,
    All = 255,
};

