#pragma once
#include "CoreMinimal.h"
#include "MatchConditionMutatorSatisfiedDelegate.generated.h"

class AFortAthenaMutator_MatchCondition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMatchConditionMutatorSatisfied, const AFortAthenaMutator_MatchCondition*, MatchConditionMutator, const bool, bSatisfied);

