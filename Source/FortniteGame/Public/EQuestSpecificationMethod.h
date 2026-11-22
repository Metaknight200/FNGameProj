#pragma once
#include "CoreMinimal.h"
#include "EQuestSpecificationMethod.generated.h"

UENUM(BlueprintType)
enum class EQuestSpecificationMethod : uint8 {
    Static,
    Slotted,
    ServiceProvider,
};

