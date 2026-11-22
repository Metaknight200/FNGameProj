#pragma once
#include "CoreMinimal.h"
#include "PhosphorusRoundAdvancedDelegate.generated.h"

class AFortAthenaMutator_Phosphorus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhosphorusRoundAdvanced, AFortAthenaMutator_Phosphorus*, Mutator, int32, Round);

