#pragma once
#include "CoreMinimal.h"
#include "EBattlePassCurrencyType.generated.h"

UENUM(BlueprintType)
enum class EBattlePassCurrencyType : uint8 {
    BattleStar,
    CustomSkin,
    TOTAL_CURRENCIES,
};

