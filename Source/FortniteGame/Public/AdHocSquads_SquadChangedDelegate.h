#pragma once
#include "CoreMinimal.h"
#include "AdHocSquads_SquadChangedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAdHocSquads_SquadChanged, const AFortPlayerStateAthena*, PlayerState, const uint8, PreviousSquadId, const uint8, NewSquadId);

