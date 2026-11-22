#pragma once
#include "CoreMinimal.h"
#include "EPhosphorusPhase.h"
#include "PhosphorusPhaseChangedDelegate.generated.h"

class AFortAthenaMutator_Phosphorus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhosphorusPhaseChanged, AFortAthenaMutator_Phosphorus*, Mutator, EPhosphorusPhase, Phase);

