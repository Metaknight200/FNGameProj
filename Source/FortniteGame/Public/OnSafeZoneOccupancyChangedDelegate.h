#pragma once
#include "CoreMinimal.h"
#include "OnSafeZoneOccupancyChangedDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSafeZoneOccupancyChanged, AFortPlayerPawn*, PlayerPawn, bool, bIsInSafeZone);

