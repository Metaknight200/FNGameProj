#pragma once
#include "CoreMinimal.h"
#include "SkyfireOnPawnExitInitialPrisonTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkyfireOnPawnExitInitialPrisonTimeChanged, const float, NewTime);

