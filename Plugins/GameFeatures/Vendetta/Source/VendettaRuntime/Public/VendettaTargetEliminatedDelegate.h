#pragma once
#include "CoreMinimal.h"
#include "VendettaTargetEliminatedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FVendettaTargetEliminated, const AFortPlayerStateAthena*, Target, const AFortPlayerStateAthena*, Killer, const AFortPlayerStateAthena*, NewTarget, int32, VictimRewardValue, int32, VictimBonusValue);

