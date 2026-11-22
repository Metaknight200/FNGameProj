#pragma once
#include "CoreMinimal.h"
#include "ETractorBeamState.generated.h"

UENUM(BlueprintType)
enum ETractorBeamState {
    TBS_Inactive,
    TBS_Charging,
    TBS_Active,
};

