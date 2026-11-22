#pragma once
#include "CoreMinimal.h"
#include "ESkyfirePhase.h"
#include "OnSkyfirePhaseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkyfirePhaseChanged, const ESkyfirePhase, NewPhase);

