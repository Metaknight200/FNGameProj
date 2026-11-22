#pragma once
#include "CoreMinimal.h"
#include "EAthenaRoundsMutatorPhase.h"
#include "RoundsMutatorPhaseChangedDelegate.generated.h"

class AFortAthenaMutator_Rounds;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRoundsMutatorPhaseChanged, const AFortAthenaMutator_Rounds*, Mutator, const EAthenaRoundsMutatorPhase, Phase);

