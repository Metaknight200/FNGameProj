#pragma once
#include "CoreMinimal.h"
#include "EFortBudgetType.generated.h"

UENUM(BlueprintType)
namespace EFortBudgetType {
    enum Type {
        Live,
        Preview,
        Max,
    };
}

