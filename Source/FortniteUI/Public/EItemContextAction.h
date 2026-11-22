#pragma once
#include "CoreMinimal.h"
#include "EItemContextAction.generated.h"

UENUM(BlueprintType)
enum class EItemContextAction : uint8 {
    Equip,
    GoToBattlePassRewards,
    GoToBattlePassCustomization,
    Count,
};

