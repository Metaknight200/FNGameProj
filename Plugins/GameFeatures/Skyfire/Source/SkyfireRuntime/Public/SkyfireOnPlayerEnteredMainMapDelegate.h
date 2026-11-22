#pragma once
#include "CoreMinimal.h"
#include "SkyfireOnPlayerEnteredMainMapDelegate.generated.h"

class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkyfireOnPlayerEnteredMainMap, const AFortPlayerPawnAthena*, PlayerPawn);

