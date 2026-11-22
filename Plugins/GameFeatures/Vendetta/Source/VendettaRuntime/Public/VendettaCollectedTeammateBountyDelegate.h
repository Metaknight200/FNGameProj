#pragma once
#include "CoreMinimal.h"
#include "VendettaCollectedTeammateBountyDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVendettaCollectedTeammateBounty, const AFortPlayerStateAthena*, Teammate, int32, Value);

