#pragma once
#include "CoreMinimal.h"
#include "EBodyguardPlayerRole.generated.h"

UENUM(BlueprintType)
enum class EBodyguardPlayerRole : uint8 {
    None,
    Bodyguard,
    VIP,
    MAX,
};

