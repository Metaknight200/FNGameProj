#pragma once
#include "CoreMinimal.h"
#include "RoundsMutatorRoundAdvancedDelegate.generated.h"

class AFortAthenaMutator_Rounds;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRoundsMutatorRoundAdvanced, const AFortAthenaMutator_Rounds*, Mutator, const int32, Round);

