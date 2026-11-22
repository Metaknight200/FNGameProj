#pragma once
#include "CoreMinimal.h"
#include "VendettaOwnBountyCollectedByTeammateDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVendettaOwnBountyCollectedByTeammate, const AFortPlayerStateAthena*, Collector, int32, Value);

