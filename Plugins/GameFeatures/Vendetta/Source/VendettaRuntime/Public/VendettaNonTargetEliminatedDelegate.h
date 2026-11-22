#pragma once
#include "CoreMinimal.h"
#include "VendettaNonTargetEliminatedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVendettaNonTargetEliminated, const AFortPlayerStateAthena*, Target, int32, Value);

