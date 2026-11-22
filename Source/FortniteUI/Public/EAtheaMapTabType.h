#pragma once
#include "CoreMinimal.h"
#include "EAtheaMapTabType.generated.h"

UENUM(BlueprintType)
enum class EAtheaMapTabType : uint8 {
    Invalid,
    Quest,
    Map,
    Collection,
};

