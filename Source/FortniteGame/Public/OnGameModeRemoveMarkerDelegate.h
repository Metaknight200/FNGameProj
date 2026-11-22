#pragma once
#include "CoreMinimal.h"
#include "OnGameModeRemoveMarkerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameModeRemoveMarker, int32, PlayerID, int32, InstanceID);

