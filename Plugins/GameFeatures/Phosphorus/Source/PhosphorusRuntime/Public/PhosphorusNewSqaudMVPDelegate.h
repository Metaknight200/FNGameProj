#pragma once
#include "CoreMinimal.h"
#include "PhosphorusNewSqaudMVPDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhosphorusNewSqaudMVP, uint8, TeamNum, AFortPlayerStateAthena*, NewMVP);

