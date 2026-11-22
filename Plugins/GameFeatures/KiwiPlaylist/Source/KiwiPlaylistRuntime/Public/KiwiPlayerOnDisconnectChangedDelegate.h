#pragma once
#include "CoreMinimal.h"
#include "KiwiPlayerOnDisconnectChangedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKiwiPlayerOnDisconnectChanged, const AFortPlayerStateAthena*, PlayerState, const bool, bDisconnected);

