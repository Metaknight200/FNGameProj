#pragma once
#include "CoreMinimal.h"
#include "EPassOfferSelected.generated.h"

UENUM(BlueprintType)
enum class EPassOfferSelected : uint8 {
    BattlePass,
    Subscription,
    Max_None,
};

