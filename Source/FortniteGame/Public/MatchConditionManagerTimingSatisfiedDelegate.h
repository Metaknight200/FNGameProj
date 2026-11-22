#pragma once
#include "CoreMinimal.h"
#include "EMatchConditionMutatorTimingType.h"
#include "MatchConditionManagerTimingSatisfiedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMatchConditionManagerTimingSatisfied, const EMatchConditionMutatorTimingType, TimingType);

