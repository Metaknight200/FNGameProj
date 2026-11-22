#pragma once
#include "CoreMinimal.h"
#include "EPhosphorusClientEventId.generated.h"

UENUM(BlueprintType)
enum class EPhosphorusClientEventId : uint8 {
    ShowLocalPlayerSquadWipedUI,
    ShowEnemySquadWipedUI,
    MAX,
};

