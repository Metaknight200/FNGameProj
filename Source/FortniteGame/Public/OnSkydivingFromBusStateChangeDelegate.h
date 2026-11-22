#pragma once
#include "CoreMinimal.h"
#include "OnSkydivingFromBusStateChangeDelegate.generated.h"

class AFortPlayerControllerZone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkydivingFromBusStateChange, AFortPlayerControllerZone*, PlayerController);

