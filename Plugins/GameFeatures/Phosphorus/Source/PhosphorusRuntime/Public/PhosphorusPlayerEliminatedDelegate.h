#pragma once
#include "CoreMinimal.h"
#include "PhosphorusPlayerEliminatedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhosphorusPlayerEliminated, AFortPlayerStateAthena*, PlayerEliminated);

